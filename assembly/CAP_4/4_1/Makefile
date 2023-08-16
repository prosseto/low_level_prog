alive: alive.o
	gcc alive.o -o alive
alive.o: alive.asm
	nasm -f elf64 -g -F dwarf alive.asm -l alive.lst
