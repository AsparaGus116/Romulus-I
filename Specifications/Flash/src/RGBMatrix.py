
generateRom = True
generateHex = True

hexFile = 0
romFile = 0
	

if generateHex:
	hexFile = open("../hex_files/RGB.hex", 'w')
	hexFile.write("v2.0 raw\n")
if generateRom:
	romFile = open("../rom_files/RGB.ROM", 'wb')

for i in range(2 ** 15):
	out = 0
	in1 = i & 0b11111
	in2 = (i >> 5) & 0b11111
	ctr = (i >> 10) & 0b11111
	if(ctr < in1):
		out |= 0b01
	if(ctr < in2):
		out |= 0b10
	if generateHex:
		hexFile.write(hex(out)[2:] + '\n')
	if generateRom:
		romFile.write(out.to_bytes(1))