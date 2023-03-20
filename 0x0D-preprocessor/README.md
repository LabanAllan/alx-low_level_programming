0x0D. C - Preprocessor.
The C preprocessor is a program that runs before the actual compilation of C code. Its main task is to process directives that begin with a '#' symbol, which are called preprocessor directives. The preprocessor performs macro substitution, conditional compilation, file inclusion, and other manipulations on the source code before it is passed on to the compiler.

Some common preprocessor directives are:

*#include: includes the contents of another file in the current file.
*#define: defines a macro, which is a symbolic name for a sequence of code.
*#ifdef, #ifndef, #else, #endif: used for conditional compilation, which allows certain code to be compiled only if a specific condition is met.
*#pragma: used to provide additional information to the compiler, such as optimization directives or to suppress warnings.
Here is an example of a simple C program that uses preprocessor directives:

#include <stdio.h>

#define PI 3.14159

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("The area of the circle is %f\n", area);
    return 0;
}

In this example, the preprocessor directive #include <stdio.h> tells the preprocessor to include the standard input/output library in the program. The #define PI 3.14159 directive defines a macro named PI, which is then used in the main function to calculate the area of a circle. The output of this program is "The area of the circle is 78.539750".

