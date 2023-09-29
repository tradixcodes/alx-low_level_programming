![Alt text](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.tradix.tech%2F&psig=AOvVaw2g_nHcj2l5Fa-QMa4mlQP3&ust=1696065394755000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCOi3xY2-z4EDFQAAAAAdAAAAABAE/ "Tradix")
## 0x09. C - Static Libraries
> What are libaries?<br>
- Libraries are a collection of objects that are made available for use by other programs. They are pre-compiled functions to avoid repetition. They are not executable but used at runtime/ compile time.<br>
- There are two types of libraries:<br>
1. Static libraries.<br>
2. Shared libraries.<br>

> What are static libraries?<br>
- These are collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.<br>
- Remember we only need executables to run(so the main.o is linked with lib[..].ato get the executable file.<br>

> What are shared libraries?<br>
- Also called dynamic libraries, are linked into the program in two stages. First is during compile time, the linker verifies that all the functions, variables and alike required by the program, are either linked into the program, or in one of its shared libraries.<br>
- However the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a progarm in the system(called dynamic loader)checks out which shared libraries were linked with the program, loads them to memory and attatches them to the copy of the program in the meomory.<br>
- The advantage to this is that we can save a lot of memory space having a shared library though the complex phase of dynamic loading makes launching the program slightly slower. If a second program linked with the same shared library is executed, it can use the copy of the shared library thus saving alot of memory.<br>

## Deep dive
> __Creating a static library__.<br>
- The basic tool used to create static libraries is a program called **'ar'** for 'archiver'.<br>
- Let's start with a sample: We want to create a static library that contains division and multiplication function prototypes;<br>
1. In our current directory, we will create two files divide.c and multiply.c<br>
divide.c
---
```
#include <stdio.h>
void _divide(int a, int b)
{
        printf("Division is : %d\n", a / b);
}

```
---
multiply.c
---
```
#include <stdio.h>
void _multiply(int a, int b)
{
        printf("Multiplication is: %d\n", a * b);
}
```
---
- REMEMBER C-COMPILATION?<br>
![Alt text](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DLOWQg8BNQJ4&psig=AOvVaw1kgqbkBD2r1iMcmF76Dkg9&ust=1696067800829000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCPDmqojHz4EDFQAAAAAdAAAAABAE)<br>
2. Now we need to compile our .c files only to the assembling stage (Machine code (.o)). We'll use gcc command (-c): Compile and assemble, but do not link.<br>
Shell
---
```
gcc -c divide.c -o lib_divide.o
gcc -c multiply.c -o lib_multiply.o
```
<br>
3. For this next step we need to create a static library out of ___lib_divide.o___ and __lib_multiply.o__<br>
Shell
---
```
ar rcs lib_calc.a lib_divide.o lib_multiply.o
```
<br>
- 'r': Replace or add files to the archive.<br>
- 'c': Create archive if it doesn't already exist.<br>
- 's': Tells the ar to generate a symbol table fot he archive. Symbol tables are used for linking object files and resolving symbols at compile time or runtime.<br>
4. We still need our function prototypes in a '.h' macro header file. So this is how our main.h file will look like:<br>
main.h
---
```
void _divide(int a, int b);
void _multiply(int a, int b);
```
5. Let's make our program body to find the division and multiplication of two numbers<br>
calc.c
---
```
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
Shell
---
```
gcc -c calc.c -o calc.o
```
<br>
7. Run ___ranlib___ function with lib_calc.a to index the library, so it is easy to find functions, variables and alike in them. Some ar functions(whcih look different readily index the library) which depends on the platform.
Shell
---
```
ranlib lib_calc.a
```
<br>
8. Lastly let's link our ___calc.o___ with our ___lib_calc.a___<br>
Shell
---
```
gcc -o calc calc.o -L. lib-calc.a
```
<br>
And that's how we do it. Easy right?
:
