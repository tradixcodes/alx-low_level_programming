![img](https://bizzy.org/_next/image?url=https%3A%2F%2Fbizzy.ams3.digitaloceanspaces.com%2Fprod%2Fcompanies%2Fbe%2Flogos%2Feb0dfadf-e8cd-427a-9a37-68bed6e72ca6%2F350782512.png&w=128&q=75)
## 0x09. C - Static Libraries
> What are libaries?<br>
- Libraries are a collection of objects that are made available for use by other programs. They are pre-compiled functions to avoid repetition. They are not executable but used at runtime/ compile time.<br>
- There are two types of libraries:<br>
1. Static libraries.<br>
2. Shared libraries.<br>

> What are static libraries?<br>
- These are collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.<br>
- Remember we only need executables to run(so the main.o is linked with lib[..].a to get the executable file.<br>

> What are shared libraries?<br>
- Also called dynamic libraries, are linked into the program in two stages. First is during compile time, the linker verifies that all the functions, variables and alike required by the program, are either linked into the program, or in one of its shared libraries.<br>
- However the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a progarm in the system(called dynamic loader)checks out which shared libraries were linked with the program, loads them to memory and attatches them to the copy of the program in the meomory.<br>
- The advantage to this is that we can save a lot of memory space having a shared library though the complex phase of dynamic loading makes launching the program slightly slower. If a second program linked with the same shared library is executed, it can use the copy of the shared library thus saving alot of memory.<br>

## Deep dive
> __Creating a static library__.<br>
- The basic tool used to create static libraries is a program called **'ar'** for 'archiver'.<br>
- Let's start with a sample: We want to create a static library that contains division and multiplication function prototypes;<br>
1. In our current directory, we will create two files divide.c and multiply.c<br>
'divide.c'
```c
#include <stdio.h>
void _divide(int a, int b)
{
        printf("Division is : %d\n", a / b);
}

```
'multiply.c'
```c
#include <stdio.h>
void _multiply(int a, int b)
{
        printf("Multiplication is: %d\n", a * b);
}
```
---
- REMEMBER C-COMPILATION?<br>
![img](https://cdn.nerdyelectronics.com/wp-content/webp-express/webp-images/uploads/2017/07/GCC_CompilationProcess.png.webp)
2. Now we need to compile our .c files only to the assembling stage (Machine code (.o)). We'll use gcc command (-c): Compile and assemble, but do not link.<br>
```bash
gcc -c divide.c -o lib_divide.o
gcc -c multiply.c -o lib_multiply.o
```
<br>

3. For this next step we need to create a static library out of ___lib_divide.o___ and __lib_multiply.o__<br>
```bash
ar rcs lib_calc.a lib_divide.o lib_multiply.o
```
<br>
- 'r': Replace or add files to the archive.<br>
- 'c': Create archive if it doesn't already exist.<br>
- 's': Tells the ar to generate a symbol table fot he archive. Symbol tables are used for linking object files and resolving symbols at compile time or runtime.<br>

4. We still need our function prototypes in a '.h' macro header file. So this is how our main.h file will look like:<br>
'main.h'
```c
void _divide(int a, int b);
void _multiply(int a, int b);
```

5. Let's make our program body to find the division and multiplication of two numbers<br>
'calc.c'
```c
#include <stdio.h>
#include "main.h"
int main(void)
{
	_divide(81, 9);
	_multiply(9, 10);
	return (0);
}
```

6. Now we need to convert our calc.c file into an object file(1's and 0's)<br>
```bash
gcc -c calc.c -o calc.o
```
<br>

7. Run ___ranlib___ function with lib_calc.a to index the library, so it is easy to find functions, variables and alike in them. Some ar functions(whcih look different readily index the library) which depends on the platform.
```bash
ranlib lib_calc.a
```
<br>

8. Lastly let's link our ___calc.o___ with our ___lib_calc.a___<br>
```bash
gcc -o calc calc.o -L. lib-calc.a
```
<br>

And that's how we do it. Easy right?
