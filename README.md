Sean Krail
CPEG324 - LAB0

Calcualtor ISA
---------------

Just run make!

---------------

Input assembly code into assembly.s
NOTE: ALL ASSEMBLY FILES MUST END WITH AN EMPTY LINE!!!

Compile and execute code with assembly.s as an argument:

    g++ file\_io.cpp calc.cpp  main.cpp -o <executable\_file>
    
    ./<executable_file> assembly\_files/<assembly\_file>
    
For example,

    g++ file_io.cpp calc.cpp  main.cpp -o calc
    
    ./calc assembly\_files/assembly.s
    ./calc assembly\_files/skip.s
    
Creates a binary file called binary.o and parses it byte by byte.
Each byte (8-bits) is an instruction.
