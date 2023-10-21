section .data
    hello db "Hello, Holberton",10,0  ; The string to print, followed by a new line (10) and null terminator (0)

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, hello  ; rdi is the first argument (format string)
    mov rax, 0      ; rax is the syscall number for printf
    call printf     ; Call printf
    mov rax, 60     ; rax is the syscall number for exit
    xor rdi, rdi    ; rdi is the exit status (0)
    syscall

section .bss
    ; Define the _start symbol as a global symbol
    global _start

