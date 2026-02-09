default rel

section .data
    msg db "Vendor ID: XXXXXXXXXXXX", 0xa
    len equ $ - msg

section .text
    global _start

%macro print 2
    mov rax, 1
    mov rdi, 1
    mov rsi, %1
    mov rdx, %2
    syscall
%endmacro

%macro exit 0
    mov rax, 60
    xor rdi, rdi
    syscall
%endmacro

_start:
    xor eax, eax
    cpuid

    mov [msg + 11], ebx
    mov [msg + 15], edx
    mov [msg + 19], ecx

    print msg, len

    exit
