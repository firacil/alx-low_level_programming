
		extern printf			; c function called

		SECTION .data			; section of data, intailizing variable.
msg:		db "Hello, Holberton", 0	; in c string will be terminated by 0
format:		db "%s", 10, 0			; printf format for new line.

		SECTION .text

		global main
main:						; entry function
		push rbp			; stack must be aligned

		mov rdi,format
		mov rsi,msg
		mov rax,0
		call printf			; calling c function.

		pop rbp				; restoring stack.

		mov rax,0			; normal, return value
		ret				; return.
