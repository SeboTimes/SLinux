global _start

section .data
    shell db "/bin/bash"

section .text

_start:
    mov rax, 59
    mov rdi, shell
    syscall

    mov rax, 60
    mov rdi, 59
    syscall
