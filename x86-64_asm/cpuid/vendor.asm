default rel

section .bss
    vendor resb 13

section .data
    msg db "Vendor ID: "
    len equ $ - msg

section .text
    global _start

%macro exit 0
    mov rax, 60
    xor rdi, rdi
    syscall
%endmacro

%macro print 2
    mov rax, 1
    mov rdi, 1
    mov rsi, %1
    mov rdx, %2
    syscall
%endmacro

_start:
    xor eax, eax
    cpuid

    mov [vendor], ebx
    mov [vendor + 4], edx
    mov [vendor + 8], ecx
    mov [vendor + 12], 0x0a

    print msg, len

    print vendor, 13

    exit
