; alive.asm
section .data
	msg1	db	"Hello, world!",10,0
	msg1len equ	$-msg1-1				;measure the length, minus 0
	msg2	db	"Alive and Kicking!",10,0 
	msg2len	equ	$-msg2-1
	radius	dq	357
	pi		dq	3.14
section .bss
section .text
	global main
main:
	push	rbp
	mov		rbp,rsp
	mov		rax, 1
	mov 	rdi, 1 ; to stdout
	mov		rsi, msg1
	mov		rdx, msg1len
	syscall
	mov		rax, 1
	mov 	rdi, 1 ; to stdout
	mov		rsi, msg2
	mov		rdx, msg2len
	syscall
	mov rsp, rbp
	pop rsp
	mov rax, 60
	mov rdi, 0
	syscall
