section .text
global findGCD

findGCD:
    push rbx        

    mov rax, rdi    
    mov rbx, rsi    

euclid:
    cmp rbx, 0
    je end_euclid   
    xor rdx, rdx    
    div rbx         
    mov rax, rbx    
    mov rbx, rdx    
    jmp euclid      

end_euclid:
    pop rbx         
    ret             
