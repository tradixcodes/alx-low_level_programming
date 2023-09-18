# 0x05. C - Pointers, arrays and strings <br>
## Intro <br>
- Will include documentation and links soon<br>
## Difference between puts, putchar and printf <br>
n C, puts and putchar are both used for output, but they serve different purposes, and printf is a more versatile and general-purpose output function. Here's an explanation of each:
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
    printf is a versatile function for formatted output, suitable for printing various types of data and formatting them as needed.
