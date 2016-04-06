import sys
print "-->arges are",sys.argv[1], sys.argv[2], sys.argv[3]  

#0 start
#1 got funcDecl
#2 got {
#3 got first get_user() or copy_from_user()	
#4 getting transfer funcs
#5 got }
#6 
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
	 	if line.find("{") != -1 :
	 		#print "{"
	 		return "{"
	 	elif line.find("}") != -1 :
	 		#print "}"
	 		return "}"
	 	elif line.find("get_user") != -1 :
	 		#print "get_user"
	 		return "trans"
	 	elif line.find("copy_from_user") != -1 :
	 		#print "copy_from_user"
	 		return "trans"
	 	elif line.find("case") != -1 :
	 		#print "case"
	 		return "case"
	 	elif line.find("default") != -1 :
	 		#print "case"
	 		return "case"
	 	elif  line == '\n' :
	 		#print "blank line"
	 		return "blank"
	 	else:
	 		#print "funcDecl"
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
	 	temp_case = ""
	 	while True:
			line = self.in_file_handler.readline()
			#print "line: ",line
			if line:				
				vline = self.identify(line)
				print "line: ",vline
				if vline == "blank":
					pass

				elif self.curState == 0 and vline == "funcDecl" :
					temp_funcDecl = line
					self.curState = 1 #got decl

				elif self.curState == 1  and  vline == "funcDecl": 
					temp_funcDecl = line
					self.curState = 1

				elif self.curState == 1 and vline == "{" :
					temp_left = "{"
					self.curState = 2  # got bracket
				
				elif self.curState == 2 and vline == "}" :
					self.curState = 0

				elif self.curState == 2 and vline == "trans" :
					temp_trans = line
					self.curState = 3  #got single trans

				elif self.curState == 3 and vline == "}" :
					self.curState = 0

				elif self.curState == 3 and vline == "trans" :
					self.curState = 4	# got double trans and writing
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
					
				elif self.curState == 4 and vline == "trans" :
					self.out_file_handler.write(line)
					
				elif self.curState == 4 and vline == "}" :
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 3 and vline == "case": #
					self.curState = 5	#in switch case,
					temp_case = line

				elif self.curState == 5 and vline == "case": #
					self.curState = 5	#in switch case,
					temp_case = line

				elif self.curState == 5 and vline == "}": #
					self.curState = 0

				elif self.curState == 5 and vline == "trans": #
					self.curState = 6 # with a single transfer function already exsits before the case, writing
					if self.isOutfileOpen:
						self.out_file_handler.write(temp_funcDecl)
						self.out_file_handler.write(temp_left+'\n')
						self.out_file_handler.write(temp_trans)
						self.out_file_handler.write(temp_case)
						self.out_file_handler.write(line)
					else:
						self.out_file_handler = open(self.outfile, "w")
						self.isOutfileOpen = True
						self.out_file_handler.write(self.origin + '\n')
						self.out_file_handler.write(temp_funcDecl)
						self.out_file_handler.write(temp_left+"\n")
						self.out_file_handler.write(temp_trans)
						self.out_file_handler.write(temp_case)
						self.out_file_handler.write(line)

				elif self.curState == 6 and vline == "trans": #
					self.out_file_handler.write(line)

				elif self.curState == 6 and vline == "}": #
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 6 and vline == "case": #
					temp_case = line
					self.curState = 7	#in new switch case

				elif self.curState == 7 and vline == "trans": #
					self.out_file_handler.write(temp_case)
					self.out_file_handler.write(line)
					self.curState = 8
				
				elif self.curState == 7 and vline == "}": #
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 7 and vline == "case": #
					temp_case = line

				elif self.curState == 8 and vline == "trans": #
					self.out_file_handler.write(line)
				
				elif self.curState == 8 and vline == "}": #
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 8 and vline == "case": #
					temp_case = line
					self.curState = 7	#in new switch case




				########## no single trans function outside switch
				elif self.curState == 2 and vline == "case":
					self.curState = 9
					temp_case = line

				elif self.curState == 9 and vline == "case":
					temp_case = line

				elif self.curState == 9 and vline == "}":
					self.curState = 0

				elif self.curState == 9 and vline == "trans":
					self.curState = 10
					temp_trans = line

				elif self.curState == 10 and vline == "}":
					self.curState = 0

				elif self.curState == 10 and vline == "case":
					self.curState = 9
					temp_case = line

				elif self.curState == 10 and vline == "trans":
					self.curState = 11 #writing, first wtime, should write decl as well
					if self.isOutfileOpen:
						self.out_file_handler.write(temp_funcDecl)
						self.out_file_handler.write(temp_left+'\n')
						self.out_file_handler.write(temp_case)
						self.out_file_handler.write(temp_trans)	
						self.out_file_handler.write(line)
					else:
						self.out_file_handler = open(self.outfile, "w")
						self.isOutfileOpen = True
						self.out_file_handler.write(self.origin + '\n')
						self.out_file_handler.write(temp_funcDecl)
						self.out_file_handler.write(temp_left+"\n")
						self.out_file_handler.write(temp_case)
						self.out_file_handler.write(temp_trans)
						self.out_file_handler.write(line)

				elif self.curState == 11 and vline == "trans":
					self.out_file_handler.write(line)

				elif self.curState == 11 and vline == "}":
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 11 and vline == "case":
					self.curState = 12 ## new case, write case and trans, no decl
					temp_case = line

				elif self.curState == 12 and vline == "case":
					temp_case = line

				elif self.curState == 12 and vline == "}":
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 12 and vline == "trans":
					self.curState = 13 # new case get single trans
					temp_trans = line

				elif self.curState == 13 and vline == "}":
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 13 and vline == "case":
					self.curState = 12
					temp_case = line

				elif self.curState == 13 and vline == "trans":
					self.curState = 14 # get double trans, writing
					self.out_file_handler.write(temp_case)
					self.out_file_handler.write(temp_trans)
					self.out_file_handler.write(line)

				elif self.curState == 14 and vline == "}":
					self.out_file_handler.write("}\n")
					self.curState = 0

				elif self.curState == 14 and vline == "case":
					self.curState = 12
					temp_case = line

				elif self.curState == 14 and vline == "trans":
					self.out_file_handler.write(line)


				else:
					#print  "# error #: " + line
					pass


				#sprint "-->state: ", self.curState

			else:
				break
		

####################################
my_filter = Filter(sys.argv[1], sys.argv[2], sys.argv[3])
my_filter.main()
my_filter.close_files()
