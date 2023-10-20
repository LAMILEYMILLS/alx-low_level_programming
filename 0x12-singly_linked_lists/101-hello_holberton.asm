section .text
	extern printf
	global main
main:
	  push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0
	ret
format: db `Hello, Holberton\n`,0
