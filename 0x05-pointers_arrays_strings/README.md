# 0x05. C - Pointers, arrays and strings <br>
## Intro <br>
- Will include documentation and links soon<br>
## Difference between puts, putchar and printf <br>
C, puts and putchar are both used for output, but they serve different purposes, and printf is a more versatile and general-purpose output function. Here's an explanation of each:
<br>
    puts:<br>
        puts stands for "put string." <br>
        It is used to write a null-terminated string to the standard output (usually the console or terminal).
        It automatically appends a newline character ('\n') to the end of the string it writes, so each call to puts starts a new line.
        It does not take format specifiers like printf. It just writes the entire string as-is.
        Example:<br>

        c

    char greeting[] = "Hello, world!";
    puts(greeting); // Writes "Hello, world!" followed by a newline.

putchar:

    putchar stands for "put character."
    It is used to write a single character to the standard output.
    You need to provide a single character as an argument, and it will be printed.
    putchar does not automatically append a newline character; you have to add it explicitly if needed.
    Example:

    c

    char letter = 'A';
    putchar(letter); // Writes 'A' to the output.
    putchar('\n');   // Writes a newline character.

printf:

    printf stands for "print formatted."
    It is a powerful and versatile function for formatted output.
    It allows you to specify format specifiers (such as %d, %s, %f, etc.) to format and print various types of data.
    It can print multiple values in a single call and format them according to your specifications.
    Example:

    c

        int num = 42;
        printf("The answer is: %d\n", num); // Writes "The answer is: 42" followed by a newline.

In summary:

    puts is primarily used for printing strings and automatically adds a newline.
    putchar is for printing single characters and does not add a newline by default.
    printf is a versatile function for formatted output, suitable for printing various types of data and formatting them as needed.<br>

    ## atoi and strtol<br>
The `atoi` function in C does not directly handle the presence of a plus (`+`) or minus (`-`) sign in front of the numeric string. It treats the plus sign as part of the string and converts the numeric portion to an integer. For example:

```c
const char *str1 = "+42";
const char *str2 = "-123";

int num1 = atoi(str1); // num1 will be 42
int num2 = atoi(str2); // num2 will be -123
```

As you can see, `atoi` converts both positive and negative numbers correctly. However, if you want to check for the presence of a plus or minus sign and perform additional error handling or processing based on that, you can do so by examining the string before calling `atoi`. Here's an example of how to do that:

```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isdigit

int main() {
    const char *str = "+42";
    int num = 0;

    // Check for a plus or minus sign
    if (*str == '-') {
        // Negative number
        num = atoi(str + 1); // Skip the sign character
        num = -num; // Negate the result
    } else if (*str == '+') {
        // Positive number
        num = atoi(str + 1); // Skip the sign character
    } else if (isdigit(*str)) {
        // No sign, assume positive
        num = atoi(str);
    } else {
        // Invalid input
        printf("Invalid input: %s\n", str);
    }

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
```

In this code, we examine the first character of the string to determine if it's a plus sign (`+`), minus sign (`-`), or a digit. Depending on the case, we either skip the sign character or treat it as a positive number, and then we use `atoi` to convert the remaining numeric portion.

Please note that this code provides basic error handling by checking for invalid input. Depending on your requirements, you can add more robust error checking and handle various cases as needed.<br>
The `atoi` function in C is used to convert a string (containing numeric characters) to an integer. It stands for "ASCII to Integer." Here's the function signature:

```c
int atoi(const char *str);
```

- `str`: A pointer to the null-terminated string to be converted to an integer.

`atoi` parses the string from left to right until it encounters a non-numeric character or the null terminator (`'\0'`). It then converts the numeric characters it has encountered into an integer and returns the result. If the string does not begin with a valid numeric representation, `atoi` returns 0.

Here are some examples of how to use the `atoi` function:

**Example 1: Basic Usage**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "12345";
    int num = atoi(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
```

In this example, the string "12345" is converted to the integer `12345` using `atoi`.

**Example 2: Handling Invalid Input**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "Hello, World!";
    int num = atoi(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
```

In this example, the string "Hello, World!" cannot be converted to an integer, so `atoi` returns 0.

**Example 3: Handling Leading White Spaces**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "   42";
    int num = atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
```

In this example, the string "   42" contains leading white spaces. `atoi` ignores the white spaces and converts the numeric part "42" to the integer `42`.

**Example 4: Negative Numbers**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "-123";
    int num = atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
```

In this example, the string "-123" is converted to the integer `-123`.

Please note that `atoi` does not perform extensive error checking, and it can lead to undefined behavior if the input string is not a valid integer representation. If you need more robust error handling and want to check for conversion errors, you may consider using other functions like `strtol`.<br>
`strtol` stands for "String to Long Integer" in C. It's a function used to convert a string representation of an integer to a long integer. `strtol` provides more flexibility and error handling compared to `atoi` because it allows you to detect and handle conversion errors and specify the base of the number being converted (e.g., decimal, hexadecimal, octal).

Here's the function signature for `strtol`:

```c
long int strtol(const char *str, char **endptr, int base);
```

- `str`: A pointer to the null-terminated string to be converted to a long integer.
- `endptr`: A pointer to a pointer to `char`. This parameter can be used to determine where the conversion stopped (i.e., the first invalid character in the string). It can be set to `NULL` if you don't need this information.
- `base`: An integer that specifies the base of the number being converted. Common bases are 10 (decimal), 16 (hexadecimal), and 8 (octal).

Here are some examples of how to use the `strtol` function:

**Example 1: Basic Usage**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "12345";
    char *endptr;
    long int num = strtol(str, &endptr, 10);

    printf("String: %s\n", str);
    printf("Integer: %ld\n", num);

    return 0;
}
```

In this example, the string "12345" is converted to the long integer `12345`. The `endptr` is used to determine where the conversion stopped (which will be the null terminator in this case).

**Example 2: Handling Invalid Input**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "Hello, World!";
    char *endptr;
    long int num = strtol(str, &endptr, 10);

    printf("String: %s\n", str);
    printf("Integer: %ld\n", num);

    if (*endptr != '\0') {
        printf("Conversion error at position: %ld\n", endptr - str);
    }

    return 0;
}
```

In this example, the string "Hello, World!" cannot be converted to an integer. `strtol` stops at the first non-numeric character, and the `endptr` points to it. You can check for conversion errors by examining the value of `endptr`.

**Example 3: Specifying a Different Base (Hexadecimal)**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = "1A"; // Hexadecimal representation of 26
    char *endptr;
    long int num = strtol(str, &endptr, 16);

    printf("String: %s\n", str);
    printf("Integer (Hexadecimal): %ld\n", num);

    return 0;
}
```

In this example, the string "1A" is converted to the long integer `26` using a base of 16 (hexadecimal).

`strtol` is a powerful function for converting strings to integers, and it provides better error handling compared to `atoi`. It's particularly useful when you need to handle various bases or need to distinguish between valid and invalid conversions.<br>
