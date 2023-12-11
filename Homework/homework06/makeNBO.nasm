;Help from StackOverflow and Youtube

global    _main
default   rel
extern    _printf
extern    _swapEndian

%macro    print_var_with_swapped  1
          sub         rsp,        8
          mov         rdi,        [%1]
          call        _swapEndian
          mov         rdx,        rax
          mov         rsi,        [%1]
          mov         rax,        0x0
          lea         rdi,        [msg]
          call        _printf
          add         rsp,        8
%endmacro


          segment       .data
a:        dd            0x1234
b:        dd            0x12340000
c:        dd            0x11112222
d:        dd            0x12121212
e:        dd            0x11000000
f:        dd            0x00000011
msg:      db            "%08x --> %08x", 10, 0
          
          segment     .text
_main:
          print_var_with_swapped a
          print_var_with_swapped b
          print_var_with_swapped c
          print_var_with_swapped d
          print_var_with_swapped e
          print_var_with_swapped f
          ret

 
