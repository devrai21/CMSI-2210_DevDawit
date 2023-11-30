global _main                  
extern _printf                
extern _scanf
default rel                   

section .text
_main:
    mov rdi, message1         
    mov rax, 0                
    call _printf
    mov rdi, format           
    lea rsi, [num1]           
    mov rax, 0                
    call _scanf

    mov rdi, message2         
    mov rax, 0                
    call _printf
    mov rdi, format           
    lea rsi, [num2]           
    mov rax, 0                
    call _scanf

    mov rax, [num1]           
    mov rcx, [num2]           
euclid:
    xor rdx, rdx              
    div rcx                   
    mov rax, rcx              
    mov rcx, rdx              
    test rdx, rdx             
    jnz euclid                

    mov rdi, message3         
    mov rsi, rax              
    mov rax, 0                
    call _printf

    mov rax, 60               
    xor rdi, rdi              
    syscall                   

section .data
message1 db "Enter an integer number (larger first): ", 0
message2 db "Enter another integer number: ", 0
message3 db "The GCD of your two numbers is: %d", 10, 0 
format   db "%d", 0

section .bss
num1 resd 1
num2 resd 1
