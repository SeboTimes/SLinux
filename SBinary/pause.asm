global _start

section .text

_start:
    mov rax, 34
    syscall

    mov rax, 60
    mov rdi, 59
    syscall
