section .data
    msg db "Hello, World", 10     ; 10 = newline character
    len equ $ - msg               ; length of the message

section .text
    global main

main:
    mov rax, 1        ; syscall number for write
    mov rdi, 1        ; file descriptor 1 = stdout
    mov rsi, msg      ; pointer to message
    mov rdx, len      ; length of message
    syscall           ; invoke system call

    mov rax, 60       ; syscall number for exit
    xor rdi, rdi      ; exit code 0
    syscall
    section .note.GNU-stack noalloc noexec nowrite