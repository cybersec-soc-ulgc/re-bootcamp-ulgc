.intel_syntax noprefix
.globl _start

_start:
mov	rax, 40
mov	rbx, 20
add	rax, rbx
mov	rdi, 1337
syscall
