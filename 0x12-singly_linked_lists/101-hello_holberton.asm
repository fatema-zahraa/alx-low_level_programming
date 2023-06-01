global   main
	  extern    printf
main:
	  mov   edi, massege
	  mov   eax, eax
	  call  printf
	  mov   eax, 0
	  return
format: massege db `Hello, Holberton\n`,0

