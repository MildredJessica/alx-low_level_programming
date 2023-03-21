### C - Dynamic libraries

## Tasks
# 0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions listed below:

# 1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

# 2. Let's call C functions from Python
Create a dynamic library that contains C functions that can be called from Python.

### How I did these tasks

## Tasks 0 (How to Create a Dynamic Library)
- touch libdynamic.so
- chmod 775 libdynamic.so
- ls -la lib*
- In this directory, I already have the functions listed in the main.h 
- Creating the Shared Library: gcc -Wall -fPIC -c *.c (The .c files are those mentioned above)
- gcc -shared -o libdynamic.so *.o (The wildcard * tells the compiler to compile all the .o files into a dynamic library which is specified by the -shared flag)
- nm -D libdynamic.so (This produces an error: File format has no dynamic symbol table, so I tried this(nm -g -C --defined-only libdynamic.so)). This worked it wasn't giving me the output that was provided in the task description. I switched to using the sandbox and everyting was okay.

## Tasks 2 (Create a dynamic library that contains C functions that can be called from Python)
- touch 100-operations.so
- chmod 775 100-operations.so
- ls -la 100-operations.so
- Create the calculator_1.c that contained all the methods the task required
- Creating the Shared Library: gcc -Wall -fPIC -c calculator_1.c
- gcc -shared -o 100-operations.so calculator_1.o
- nm -D 100-operations.so 
- export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
- Created the 100-tests.py as provided ran
- python3 100-tests.py

# Links that helped 
[Link1](https://medium.com/@julianfrancor9/creating-a-dynamic-library-in-c-b2cb01d45876)
[Link2](https://cylab.be/blog/234/creating-a-dynamic-library-in-c)
[Link2](https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00#:~:text=The%20way%20to%20create%20a,make%20the%20code%20position%20independent)