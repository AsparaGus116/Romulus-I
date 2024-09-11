# ROMULUS-I 
Romulus-I is a 16-bit CPU project with a custom ISA and implementation, to boot with an assembler and compiler.

Some features include:
<ul>
  <li>Separate instruction memory, data memory, and stack memory (64k addresses)</li>
  <li>An intuitive instruction set that makes even writing bitcode easy and painless</li>
  <li>4 memory mapped I/O ports with support for an interrupt handler</li>
  <li>A stack that can be used to store arbitrary data, as well as doubling as a call stack</li>
  <li>Control signals and ALU logic that can be easily re-programmed to reconfigure the CPU for specific tasks</li>
  <li>LEDs on general-purpose registers, and 7-segment displays on the data bus and IR to make understanding program flow easy</li>
  <li>Different clock modes, to allow for single-step, slow mode, and maximum run speed (~100kHz-1MHz)</li>
</ul>

This CPU is designed with the student in mind, in order to lessen the friction for learning computer architecture as much as possible. Our goal is to make using our CPU as simple as possible, while still including enough features to allow the implementation of complex programs. Whether being used at a middle school level or a graduate level, Romulus-I offers something for any student.

Designed and built by Wolfgang Ploch, August Bresnaider, Will Rimicci and Austin Chappell.
