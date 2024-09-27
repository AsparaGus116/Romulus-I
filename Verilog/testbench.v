module testbench;

reg[15:0] Din;
reg load;
reg outEn;
wire[15:0] Dout;

SN74LS573 r1(.D(Din), .OE(outEn), .LE(load), .Q(Dout));

initial begin
	Din <= 0;
	load <= 0;
	outEn <= 0;
	#10;
	load <= 1;
	#10;
	Din <= 'hff00;
	#10;
	outEn <= 1;
	#10;
	load <= 0;
	#10;
	Din <= 'h00ff;
	#10;
	outEn <= 0;
	#10;
end

endmodule