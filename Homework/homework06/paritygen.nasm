section .text
global paritygen

paritygen:
    mov rax, rdi        
    mov rcx, 8          
    mov rdx, 0          

count_bits:
    shl rax, 1          
    jnc no_increment    
    inc rdx             

no_increment:
    loop count_bits     

    test rdx, 1         
    setz al             
    ret                 
