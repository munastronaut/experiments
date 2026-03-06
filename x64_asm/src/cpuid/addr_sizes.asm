default rel

section .data
    msg db "Address sizes: XX bits physical; XX bits virtual", 10
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
    mov eax, 0x80000008
    cpuid
    mov edi, eax

    movzx eax, al
    mov bl, 10
    div bl
    add al, '0'
    add ah, '0'
    mov [msg + 15], al
    mov [msg + 16], ah

    mov eax, edi
    shr eax, 8
    movzx ax, al
    mov bl, 10
    div bl
    add al, '0'
    add ah, '0'
    mov [msg + 33], al
    mov [msg + 34], ah

    print msg, len

    exit
