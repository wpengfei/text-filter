import sys
#print "args: in-->",sys.argv[1], "   out-->:", sys.argv[2]
#print "-->arges is",sys.argv[1], sys.argv[2], sys.argv[3]  

#0 start
#1 got funcDecl
#2 got {
#3 got get_user() or copy_from_user()	
#4 writing trans
#5 got }
class Filter:
	def __init__(self, inadd, outadd):
	 	self.infile = inadd
	 	self.outfile = outadd
	 	self.origin = ""
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

	def is_same(self, str1, str2):
		#print "=>strs:", str1, str2
		if str1 == str2:
			#print "=> same strs"
			return True
		if str1.find('get_user') != -1 and str2.find('copy_from_user') != -1:
			#print "=> differ strs"
			return False
		if str1.find('copy_from_user') != -1 and str2.find('get_user') != -1:
			#print "=> differ strs"
			return False
		if str1.find('get_user') != -1 and str2.find('get_user') != -1:
			loc1s = str1.find(',')
			loc1e = str2.find(')',loc1s)
			loc2s = str2.find(',')
			loc2e = str2.find(')',loc2s)
			if(str1[loc1s:loc1e] == str2[loc2s:loc2e]):
				#print "=> get_user match"
				return True
			else:
				#print "=> get_user dismatch"
				return False
				
		if str1.find('copy_from_user') != -1 and str2.find('copy_from_user') != -1:
			loc1s = str1.find(',')
			loc1e = str1.find(',',loc1s+1)
			loc2s = str2.find(',')
			loc2e = str2.find(',',loc2s+1)
			#loc11 = str1.rfind(',')
			#loc22 = str2.rfind(',')
			if(str1[loc1s:loc1e] == str2[loc2s:loc2e]):
				#print "=> copy_from_user match"
				return True
				 
			else:
				#print "=> copy_from_user dismatch"
				return False
		else:
			#print "error!\n"
			return False

	

	#in_list: all the transfer funcs
	#out_list: pick out all the identical transfer funcs
	def process_skeleton(self, in_list):
		out_list = []
		l = len(in_list)
		s1 = 0
		while (s1 < l-1):
			s2 = s1 + 1
			s1_add = False
			while s2 < l:
				if self.is_same(in_list[s1],in_list[s2]):
					if s1_add:
						out_list.append(in_list[s2])
					else:
						out_list.append(in_list[s1])
						out_list.append(in_list[s2])
						s1_add = True
				s2 = s2 + 1
			s1 = s1 + 1

		return out_list


	def close_files(self):
	 	self.in_file_handler.close()
	 	if self.out_file_handler:
	 		self.out_file_handler.close()

	def main(self):
	 	self.in_file_handler = open(self.infile, "r")
	 	self.origin = self.in_file_handler.readline()
	 	#print "source file->:", self.origin
	 	temp_funcDecl = ""
	 	temp_left = ""
	 	temp_transfer = ""


	 	in_list = []
		out_list = []
	 	while True:
			line = self.in_file_handler.readline()
			#print "line: ", line
			#print "line indentify: ",self.identify(line)
			if line:
				if self.identify(line) == "funcDecl" and (self.curState == 0 or self.curState == 5):
					temp_funcDecl = line
					self.curState = 1
					#print "state 1"

				elif self.identify(line) == "{" and self.curState == 1:
					temp_left = "{"
					self.curState = 2
					#print "state 2"
				
				elif self.identify(line) == "trans" and self.curState == 2:					
					self.curState = 3
					#print "state 3"
					in_list.append(line)
					while True:
						#print "enter loop"
						line = self.in_file_handler.readline()
						#print "line: ", line
						if self.identify(line) == "}" :
							self.curState = 4
							#print "state 4 break"
							break
						if self.identify(line) == "trans" and self.curState == 3:
							in_list.append(line)
							#print "append"
					#print "inlist--->: ", in_list
					out_list = self.process_skeleton(in_list)
					#print "outlist--------->: ", out_list
					if out_list and self.curState == 4:
						#print "outlist not empty"
						self.curState = 5
						if self.isOutfileOpen:
							self.out_file_handler.write(temp_funcDecl)
							self.out_file_handler.write(temp_left+'\n')
							for str in out_list:
								self.out_file_handler.write(str)
							self.out_file_handler.write("}\n")
						else:
							self.out_file_handler = open(self.outfile, "w")
							self.isOutfileOpen = True
							self.out_file_handler.write(self.origin + '\n')
							self.out_file_handler.write(temp_funcDecl)
							self.out_file_handler.write(temp_left+"\n")
							for str in out_list:
								self.out_file_handler.write(str)
							self.out_file_handler.write("}\n")
						in_list = [] #reset buffers
						out_list = []
					else:
						self.curState = 5
						in_list = [] #reset buffers
						out_list = []
						#print "list empty:state->5"
				else:
					print "error!:", sys.argv[1], sys.argv[1], self.origin
			else:
				break	
					
					
						
						

				

				

				

			
		

####################################
my_filter = Filter(sys.argv[1], sys.argv[2])
my_filter.main()
my_filter.close_files()
