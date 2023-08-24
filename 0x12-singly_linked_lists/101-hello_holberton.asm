global   main
    extern    printf
main:
    mov   edi, format_string
    xor   eax, eax
    call  printf
    mov   eax, 0
    ret
format_string: db `Hello, Holberton\n`,0

