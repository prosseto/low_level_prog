move: move.o
	gcc move.o -o move
move.o: move.asm
	nasm -f elf64 -g -F dwarf move.asm -l move.lst
