module tb;

reg[15:0] D;
reg LE;
reg OE;
wire[15:0] Q;

SN74LS573 r1(D, OE, LE, Q);

initial begin
	D <= 0;
	LE <= 0;
	OE <= 0;
	#10;
	LE <= 1;
	#10;
	D <= 'hff00;
	#10;
	OE <= 1;
	#10;
	LE <= 0;
	#10;
	D <= 'h00ff;
	#10;
	OE <= 0;
	#10;
end

endmodule