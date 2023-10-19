section .data
    hello db "Hello, Holberton",10,0 ; The string to print (including the newline character)

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello  ; Load the address of the string into rdi
    call printf     ; Call the printf function
    add rsp, 8      ; Adjust the stack pointer after the call
    pop rbp

    ; Exit the program
    mov rax, 60     ; syscall number for exit (60)
    xor rdi, rdi    ; Exit status, 0
    syscall

