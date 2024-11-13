import math
import typing

outputRom = True
outputHex = True

def main():
	# Define the order of inputs and outputs.
	inputMap = ["reset","jcmp","op2.0","interrupt","op3","op2","op1","op0","sub3","sub2","sub1", "sub0"]
	
	outputMap = ["Cmar", "Cdata", "Er_x", "Epc", "Edip", "Cpc", "Cr_x", "Edata", "csp++", "csp--", "pcdec", "Cstack", "Intres", "Estack", "Einstr", "pcinc",
	"Cir", "Cp_1", "Ealu", "sel0", "Ccmp", "setsub", "sel1", "Cp_0"] # first 8: U2, then U3, then U4
	#outs = findOuts(inputMap,outputMap,test)

	#print(test)
	#print(outs)
	#print(format(bits2bytes(test),bits2bytes(outs)))

	#"""
	if outputRom:
		file0 = open("../rom_files/FSM_U2.ROM",'wb') #U2
		file1 = open("../rom_files/FSM_U3.ROM",'wb') #U3
		file2 = open("../rom_files/FSM_U4.ROM",'wb') #U4
	if outputHex:
		file00 = open("../hex_files/fsm_U2.hex",'w') #U2
		file01 = open("../hex_files/fsm_U3.hex",'w') #U3
		file02 = open("../hex_files/fsm_U4.hex",'w') #U4
	
	for ins in range(0,2**12):

		outs = findOuts(inputMap,outputMap,bytes2bits(ins,12))
		
		#print(outs)
		if(outputHex):
			file00.write(format(ins,bits2bytes(outs),0))
			file01.write(format(ins,bits2bytes(outs),1))
			file02.write(format(ins,bits2bytes(outs),2))
		if outputRom:
			#print(bytes([generateByte(outs, 0)]))
			file0.write(bytes([generateByte(outs, 0)]));
			file1.write(bytes([generateByte(outs, 1)]));
			file2.write(bytes([generateByte(outs, 2)]));
	if outputHex:	
		file00.write(":00000001FF")
		file01.write(":00000001FF")
		file02.write(":00000001FF")
	#"""

def generateByte(arr: list[int], val: int) -> int:
	res = 0
	for i in range(8 * val, 8 + 8 * val):
		res = res << 1
		res |= (arr[i] & 1)
	return res

def findOuts(inputMap: list[str],outputMap: list[str],val: list[int]) -> list[int]:

	# Assign bit values of input signals to variables to allow for configurable pins
	op3 = val[inputMap.index("op3")]
	op2 = val[inputMap.index("op2")]
	op1 = val[inputMap.index("op1")]
	op0 = val[inputMap.index("op0")]
	sub3 = val[inputMap.index("sub3")]
	sub2 = val[inputMap.index("sub2")]
	sub1 = val[inputMap.index("sub1")]
	sub0 = val[inputMap.index("sub0")]
	opTwo = val[inputMap.index("op2.0")]
	reset = val[inputMap.index("reset")]
	interrupt = val[inputMap.index("interrupt")]
	jcmp = val[inputMap.index("jcmp")]

	# Simplify multi-bit signals
	opcode = op3*8 + op2*4 + op1*2 + op0
	subclock = sub3 * 8 + sub2*4 + sub1*2 + sub0

	# Set all output signals to 0 to start
	Cir = 1
	Cmar = 1
	Edip = 1
	Cpc = 1
	Epc = 1
	Cdata = 1
	Edata = 1
	Cp_0 = 1
	Cp_1 = 1
	Ealu = 1
	#Cr_all = 1
	Cr_x = 1
	Er_x = 1
	sel0 = 0
	sel1 = 0
	cspInc = 1
	cspDec = 1
	Einstr = 1
	Cstack = 1
	Estack = 1
	Ccmp = 1
	setsub = 1
	pcinc = 1
	pcdec = 1
	Intres = 1

	# Logic to assign outputs based on inputs
	if (reset == 1):
		pass # make sure all pins are high
	elif (interrupt == 1):
		match subclock:
			case 0:
				Epc = (not Epc) & 1
				Cstack = (not Cstack) & 1
			case 1:
				cspInc = (not cspInc) & 1
			case 2:
				Edip = (not Edip) & 1
				Cpc = (not Cpc) & 1
			case 3:
				Intres = (not Intres) & 1
			case 4:
				setsub = (not setsub) & 1
	else:
		match opcode:
			case 0: # opcode = 0 (register to register)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						Er_x = (not Er_x) & 1
						Cp_0 = (not Cp_0) & 1
					case 2:
						Ealu = (not Ealu) & 1
						Cr_x = (not Cr_x) & 1
						sel1 = (not sel1) & 1
					case 3:
						pcinc = (not pcinc) & 1
					case 4:
						setsub = (not setsub) & 1
			case 1: # opcode = 1 (immediate to register)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						pcinc = (not pcinc) & 1
					case 2:
						Einstr = (not Einstr) & 1
						Cr_x = (not Cr_x) & 1
						sel1 = (not sel1) & 1
					case 3:
						pcinc = (not pcinc) & 1
					case 4:
						setsub = (not setsub) & 1
			case 2: # opcode = 2 (register to memory)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						Er_x = (not Er_x) & 1
						sel0 = (not sel0) & 1
						Cmar = (not Cmar) & 1
					case 2:
						Er_x = (not Er_x) & 1
						Cdata = (not Cdata) & 1
					case 3:
						pcinc = (not pcinc) & 1
					case 4:
						setsub = (not setsub) & 1
			case 3: # opcode = 3 (memory to register)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						Er_x = (not Er_x) & 1
						Cmar = (not Cmar) & 1
					case 2:
						Edata = (not Edata) & 1
						Cr_x = (not Cr_x) & 1
						sel1 = (not sel1) & 1
					case 3:
						pcinc = (not pcinc) & 1
					case 4:
						setsub = (not setsub) & 1
			case 4 | 6 | 7 | 8 | 9: # opcode = 4, 6, 7, 8, or 9 (ALU binary operations)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						Er_x = (not Er_x) & 1
						Cp_0 = (not Cp_0) & 1
					case 2:
						Er_x = (not Er_x) & 1
						sel0 = (not sel0) & 1
						Cp_1 = (not Cp_1) & 1
					case 3:
						Ealu = (not Ealu) & 1
						Cr_x = (not Cr_x) & 1
						sel1 = (not sel1) & 1
					case 4:
						pcinc = (not pcinc) & 1
					case 5:
						setsub = (not setsub) & 1
			case 5 | 10 | 11: # opcode = 5, A, or B (ALU unary operations)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						Er_x = (not Er_x) & 1
						Cp_0 = (not Cp_0) & 1
					case 2:
						Ealu = (not Ealu) & 1
						Cr_x = (not Cr_x) & 1
						sel1 = (not sel1) & 1
					case 3:
						pcinc = (not pcinc) & 1
					case 4:
						setsub = (not setsub) & 1
			case 12: # opcode = C (push)
				match opTwo:
					case 0: # op2.0 = 0 (push Ra to stack)
						match subclock:
							case 0:
								Einstr = (not Einstr) & 1
								Cir = (not Cir) & 1
							case 1:
								Er_x = (not Er_x) & 1
								Cstack = (not Cstack) & 1
							case 2:
								cspInc = (not cspInc) & 1
							case 3:
								pcinc = (not pcinc) & 1
							case 4:
								setsub = (not setsub) & 1
					case 1: # op2.0 = 1 (puch PC to stack)
						match subclock:
							case 0:
								Einstr = (not Einstr) & 1
								Cir = (not Cir) & 1
							case 1:
								Epc = (not Epc) & 1
								Cstack = (not Cstack) & 1
							case 2:
								cspInc = (not cspInc) & 1
							case 3:
								pcinc = (not pcinc) & 1
							case 4:
								setsub = (not setsub) & 1
			case 13: # opcode = D (pop)
				match opTwo:
					case 0: # op2.0 = 0 (pop into Ry)
						match subclock:
							case 0:
								Einstr = (not Einstr) & 1
								Cir = (not Cir) & 1
							case 1:
								cspDec = (not cspDec) & 1
							case 2:
								Estack = (not Estack) & 1
								Cr_x = (not Cr_x) & 1
								sel1 = (not sel1) & 1
							case 3:
								pcinc = (not pcinc) & 1
							case 4:
								setsub = (not setsub) & 1
					case 1: # op2.0 = 1 (pop into PC)
						match subclock:
							case 0:
								Einstr = (not Einstr) & 1
								Cir = (not Cir) & 1
							case 1:
								cspDec = (not cspDec) & 1
							case 2:
								Estack = (not Estack) & 1
								Cpc = (not Cpc) & 1
							case 3:
								setsub = (not setsub) & 1
			case 14: # opcode = E (unconditional jump)
				match subclock:
					case 0:
						Einstr = (not Einstr) & 1
						Cir = (not Cir) & 1
					case 1:
						Er_x = (not Er_x) & 1
						Cpc = (not Cpc) & 1
					case 2:
						setsub = (not setsub) & 1
			case 15: # opcode = F (jump compare)
				match jcmp: # active HIGH
					case 0: # jcmp = 0 (condition not met, do not jump)
						match subclock:
							case 0:
								Einstr = (not Einstr) & 1
								Cir = (not Cir) & 1
							case 1:
								Er_x = (not Er_x) & 1
								sel0 = (not sel0) & 1
								Ccmp = (not Ccmp) & 1
							case 2:
								pcinc = (not pcinc) & 1
							case 3:
								setsub = (not setsub) & 1
					case 1: # jcmp = 1 (condition met, jump to Ra)
						match subclock:
							case 0:
								Einstr = (not Einstr) & 1
								Cir = (not Cir) & 1
							case 1:
								Er_x = (not Er_x) & 1
								sel0 = (not sel0) & 1
								Ccmp = (not Ccmp) & 1
							case 2:
								Er_x = (not Er_x) & 1
								Cpc = (not Cpc) & 1
							case 3:
								setsub = (not setsub) & 1
			case _:
				print("This message should not appear.")
	
	## All output signals have now been properly set.


	# Prepare array that will contain output signals
	outs = [-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]

	# Set the values in the array based on outputMap
	outs[outputMap.index("Cir")] = Cir
	outs[outputMap.index("Cmar")] = Cmar
	outs[outputMap.index("Edip")] = Edip
	outs[outputMap.index("Cpc")] = Cpc
	outs[outputMap.index("Epc")] = Epc
	outs[outputMap.index("Cdata")] = Cdata
	outs[outputMap.index("Edata")] = Edata
	outs[outputMap.index("Cp_0")] = Cp_0
	outs[outputMap.index("Cp_1")] = Cp_1
	outs[outputMap.index("Ealu")] = Ealu
	#outs[outputMap.index("Cr_all")] = Cr_all
	outs[outputMap.index("Cr_x")] = Cr_x
	outs[outputMap.index("Er_x")] = Er_x
	outs[outputMap.index("sel0")] = sel0
	outs[outputMap.index("sel1")] = sel1
	outs[outputMap.index("csp++")] = cspInc
	outs[outputMap.index("csp--")] = cspDec
	outs[outputMap.index("Einstr")] = Einstr
	outs[outputMap.index("Cstack")] = Cstack
	outs[outputMap.index("Estack")] = Estack
	outs[outputMap.index("Ccmp")] = Ccmp
	outs[outputMap.index("setsub")] = setsub
	outs[outputMap.index("pcinc")] = pcinc
	outs[outputMap.index("pcdec")] = pcdec
	outs[outputMap.index("Intres")] = Intres
	return outs


# Converts an integer to an array of single bits
def bytes2bits(bytes: int,nBits: int) -> list[int]:

	# arrayLen = max((math.floor(math.log(bytes,2))+1),1)
	bits = [-1] * nBits
	for i in range(0,len(bits)):
		bits[len(bits)-1-i] = bytes % 2
		bytes = int(bytes/2)
	return bits



# Converts an array of single bits to an integer
def bits2bytes(bits: list[int]) -> int:
	bytes = 0
	
	for i in range(0,len(bits)):
		bytes += (bits[len(bits)-1-i])*2**i
	return bytes



def format(address: int, data: int, sel: int) -> str:
	string = ":"
	#byteCount = max((math.floor(math.log(data,256))+1),1) # Find the number of bytes in data
	byteCount = 1
	recordType = 0 # recordType is always zero for data

	# Separate the address into its upper and lower bytes for chcksum
	addressLower = address % 256
	addressUpper = int((address - addressLower)/256)

	# Separate the data into its upper and lower bytes for chcksum
	dataLower = data % 256
	dataUpper = int((data - dataLower)/256)
	dataMid = dataUpper % 256
	dataUpper = int((dataUpper - dataMid)/256)
	if sel == 0:
		data = dataUpper
	elif sel == 1:
		data = dataMid
	elif sel == 2:
		data= dataLower
	else:
		print("ERROR: INVALID SELECTION")
		return "ERR"

	# Compute checksum, which is the two's compliment of the sum of all other bytes in the line
	checksum = -(byteCount+addressUpper+addressLower+recordType+data) % 256

	# Convert all variables to strings in hex, ensuring all sections are the right length (e.g. making a byte count of 4 into "04")
	byteCount = hex(byteCount)[2:]
	if((len(byteCount) % 2) == 1):
		byteCount = "0" + byteCount

	address = hex(address)[2:]
	while(len(address) < 4):
		address = "0" + address

	recordType = hex(recordType)[2:]
	if((len(recordType) % 2) == 1):
		recordType = "0" + recordType

	data = hex(data)[2:]
	while(len(data) != 2):
		data = "0" + data

	checksum = hex(checksum)[2:]
	if((len(checksum) % 2) == 1):
		checksum = "0" + checksum

	# Concatenate all strings to create final line
	#string += (byteCount + " " + address + " " + recordType + " " + data + " " + checksum + '\n')
	string += (byteCount + address + recordType + data + checksum + '\n')
	return string

if __name__ == "__main__":
	main()
