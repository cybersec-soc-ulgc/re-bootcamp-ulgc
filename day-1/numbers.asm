.intel_syntax noprefix
.globl _start

_start:
mov	eax, 5 
mov	ebx, 4
cmp	eax, ebx
je 	_exit
mov	rdi, 1
mov 	rax, 60
syscall

_exit:
mov	rdi, 0
mov	rax, 60
syscall


