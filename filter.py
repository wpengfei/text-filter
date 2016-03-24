import sys
#print "-->arges is",sys.argv[1], sys.argv[2], sys.argv[3]  

#0 start
#1 got funcDecl
#2 got {
#3 got first get_user() or copy_from_user()	
#4 getting transfer funcs
#5 got }
class Filter:
	 def __init__(self, inadd, outadd, orig):
	 	self.infile = inadd
	 	self.outfile = outadd
	 	self.origin = orig;
	 	self.curState = 0
	 	self.in_file_handler = None
	 	self.out_file_handler = None
	 	self.isOutfileOpen = False

	 def get_infile_handler(self):
	 	return open(self.infile, "r")

	 def get_outfile_handler(self):
	 	return open(self.outfile, "w+")

	 def identify(self, line):
	 	if line.find("{") == 0 :
	 		return "{"
	 	elif line.find("}") == 0 :
	 		return "}"
	 	elif line.find("get_user") == 0 :
	 		return "trans"
	 	elif line.find("copy_from_user") == 0 :
	 		return "trans"
	 	else:
	 		return "funcDecl"

	 def close_files(self):
	 	self.in_file_handler.close()
	 	if self.out_file_handler:
	 		self.out_file_handler.close()

	 def main(self):
	 	self.in_file_handler = open(self.infile, "r")
	 	temp_funcDecl = ""
	 	temp_left = ""
	 	temp_trans = ""
	 	while True:
			line = self.in_file_handler.readline()
			if line:
				#print "--->line:", line
				if self.identify(line) == "funcDecl" and (self.curState == 0 or self.curState == 5):
					temp_funcDecl = line
					self.curState = 1

				elif self.identify(line) == "funcDecl" and self.curState == 1:
					temp_funcDecl = line
					self.curState = 1

				elif self.identify(line) == "{" and self.curState == 1:
					temp_left = "{"
					self.curState = 2
				
				elif self.identify(line) == "}" and self.curState == 2:
					self.curState = 5

				elif self.identify(line) == "trans" and self.curState == 2:
					temp_trans = line
					self.curState = 3

				elif self.identify(line) == "}" and self.curState == 3:
					temp_trans = line
					self.curState = 5

				elif self.identify(line) == "trans" and self.curState == 3:
					self.curState = 4	
					if self.isOutfileOpen:
						self.out_file_handler.write(temp_funcDecl)
						self.out_file_handler.write(temp_left+'\n')
						self.out_file_handler.write(temp_trans)
						self.out_file_handler.write(line)
					else:
						self.out_file_handler = open(self.outfile, "w")
						self.isOutfileOpen = True
						self.out_file_handler.write(self.origin + '\n')
						self.out_file_handler.write(temp_funcDecl)
						self.out_file_handler.write(temp_left+"\n")
						self.out_file_handler.write(temp_trans)
						self.out_file_handler.write(line)
					

				elif self.identify(line) == "trans" and self.curState == 4:
					self.out_file_handler.write(line)
					

				elif self.identify(line) == "}" and self.curState == 4:
					self.out_file_handler.write(line)
					self.curState = 5

			else:
				break
		

####################################
my_filter = Filter(sys.argv[1], sys.argv[2], sys.argv[3])
my_filter.main()
my_filter.close_files()
