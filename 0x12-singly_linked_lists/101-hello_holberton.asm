section .data
hello db "Hello, Holberton",0
format db "%s",10,0

section .text
global main

extern printf

main:
; Prepare the arguments for printf
mov rdi, format
mov rsi, hello

; Call printf
call printf

; Exit the program
mov rax, 60         ; syscall number for exit
xor rdi, rdi        ; exit code 0
syscall
