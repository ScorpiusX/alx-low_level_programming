0-preprocessor: the gcc -E option stops after the preprocessing stage and does not run the compiler proper, therefore the gcc compiler preprocesses the output of the variable to the c file.
ans: 
#!/bin/bash
gcc -E $CFile >> c .
chmod u+x 0-preprocessor .

1-compiler: the gcc -c option compiles or assembles the source files, but does not link, by default the object file name for the source file is made by replacing the present suffix with .o.
ans:
#!/bin/bash
gcc - c $CFile .
chmod u+x 1-compiler.

2-assembler: the gcc -S option stops after the compilation stage, but does not assemble, instead the output is inform of an assembler code file, by default the assembler file name for the source file is made by replacing the present suffix with .s.
ans:
#!/bin/bash
gcc -S $CFile .
