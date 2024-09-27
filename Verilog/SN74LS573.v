module SN74LS573(D, OE, LE, Q);

input[15:0] D;
input OE;
input LE;
output reg[15:0] Q;
	
reg[15:0] internal;

initial internal = 0;

always@(LE, OE, D, internal) begin
	if(LE == 1) begin
		internal <= D;
	end else begin
		internal <= internal;
	end
	
	if(OE == 0) begin
		Q <= internal;
		internal <= internal;
	end else begin
		Q <= 16'bz;
		internal <= internal;
	end
	
	
end


	
endmodule