; alive.asm
DEFAULT REL
extern printf
section .data
	msg1	db	"Hello, world!",0
	radius	dq	357
	pi		dq	3.14
	msg_fmt1	db	"%s",10,0
	msg_flt		db	"%lf",10,0
	msg_int		db	"%d",10,0
section .bss
section .text
	global main
main:
	push	rbp
	mov		rbp,rsp
	;print msg1
	mov		rax, 0
	mov 	rsi, msg1
	mov		rdi, msg_fmt1
	call printf
	;print integer 
	mov		rax, 0
	mov 	rsi, [radius]
	mov		rdi, msg_int
	call printf
	;print float
	mov		rax, 1
	movq 	xmm0, [pi]
	mov		rdi, msg_flt
	call 	printf
	mov 	rsp, rbp
	pop 	rbp
	ret
