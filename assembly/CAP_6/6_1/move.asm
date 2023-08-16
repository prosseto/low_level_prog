;move.asm
section .data
	bNum	db		123
	wNum	dw		12345
	dNum	dd		1234567890
	qNum1	dq		123456789123456789
	qNum2	dq		123456
	qNum3	dq		3.14
section .bss
section .text
	global main
main:
	push	rbp
	mov		rbp,rsp
	mov 	rax, -1	;fill rax with 1
	mov		al, byte [bNum] ; does NOT clear upper bits of rax
	xor		rax, rax
	mov		al, byte [bNum] ; now rax has the correct value

	mov		rax, -1
	mov		ax, word [wNum]	; does NOT clear upper bits of rax
	xor		rax, rax
	mov		eax, word [wNum] ; does clear upper bits of rax

	mov		rax, -1
	mov		ax, dword [dNum]; does clear upper bits of rax

	mov		rax, -1
	mov		rax, qword [qNum1]; does clear upper bits of rax
	mov		qword [qNum2], rax
	mov		rax, 123456		;immediate value
	movq	xmm0, [qNum3]	;instruction for floating point
	mov 	rsp, rbp
	pop		rbp
	ret
