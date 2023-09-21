# 0x06. C - More pointers, arrays and strings<br>
## Intro<br>
Basically just more pointers, arrays and strings<br>

### Array type decay <br>
Array type decay, also known as array decay or array-to-pointer decay, is a concept in C and C++ where an array's type is automatically converted into a pointer to its first element in certain contexts. This conversion is implicit and happens when you pass an array as an argument to a function, among other situations. Here, I'll provide some well-explained examples to illustrate array type decay:

**Example 1: Passing an Array to a Function**

```c
#include <stdio.h>

void printArray(int arr[]) {
    // Inside the function, 'arr' is treated as a pointer to int.
    // You lose information about the array's size.
    
    // This will not give you the size of the array; it will give the size of a pointer.
    printf("Size of 'arr' inside the function: %zu\n", sizeof(arr));
    
    // To iterate through the array elements, you need to know its size.
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    
    // When you pass 'myArray' to 'printArray', it undergoes array decay.
    // 'arr' inside 'printArray' is a pointer to the first element of 'myArray'.
    printArray(myArray);
    
    // The original array 'myArray' remains unchanged.
    printf("Size of 'myArray' in main: %zu\n", sizeof(myArray));
    
    return 0;
}
```

In this example, when you pass `myArray` to the `printArray` function, it undergoes array decay, and inside the function, `arr` is treated as a pointer to int. You lose information about the array's size, and you need to rely on additional information to work with the array's elements.

**Example 2: Using Array Decay with Pointers**

```c
#include <stdio.h>

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    
    // 'ptr' is a pointer to the first element of 'myArray'.
    int* ptr = myArray;
    
    // Using array decay, you can pass 'myArray' to a function expecting a pointer.
    // The function can then work with the array elements using the pointer.
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    return 0;
}
```

In this example, `ptr` is a pointer to the first element of `myArray`. You can directly use `myArray` in a context that expects a pointer, thanks to array decay. The code snippet demonstrates how you can iterate through the array elements using the pointer.

Array type decay is a fundamental concept in C and C++ and understanding it is crucial when working with arrays and functions that expect pointers to arrays. It's important to be aware of when array decay occurs to avoid unexpected behavior in your code.<br>
