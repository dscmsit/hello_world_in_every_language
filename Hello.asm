; Assembly with  nasm -f elf32 -o Hello.o Hello.asm 
; Link with ld -m elf_i386 -o Hello.out Hello.o
global _start
section .data:
	message db "Hello World!", 0xA
	message_length equ $-message

section .text:
_start:
	mov eax, 0x4           ;Specifying the write syscall
	mov ebx, 0x1           ;STDOUT file descriptor
	mov ecx, message       ;Specifying the buffer
	mov edx, message_length;Specifying the count of bytes
	int 0x80               ;Invoke the syscall
	
	;Return zero
	mov eax, 0x1
	mov ebx, 0
	int 0x80

