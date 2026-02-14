section .data
    msg db 0x46, 0x75, 0x63, 0x6b, 0x20, 0x59, 0x6f, 0x75, 0x0a
    len equ $ - msg

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, len
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
