#makefile for hello.asm
hello: hello.o
	gcc -o hello hello.o -no-pie
hello.o: hello2.asm
	nasm -f elf64 -g -F dwarf hello2.asm -l hello.lst -o hello.o
