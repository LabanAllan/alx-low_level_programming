0x10. C - Variadic functions.

stdarg.h-
is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments, it contain a set of macros which allows portable functions that accept variable argument lists to be written.
 Micros
	The type va_list shall be defined for variables used to traverse the list.
	The va_start() macro is invoked to initialize ap to the beginning of the list before any calls to va_arg().
	The va_copy() macro initializes dest as a copy of src.
	The va_start() macro initializes the arg_ptr pointer for subsequent calls to va_arg() and va_end().	The va_arg() macro retrieves a value of the given var_type from the location given by arg_ptr and increases arg_ptr to point to the next argument in the list. The va_arg() macro can retrieve arguments from the list any number of times within the function..
The va_end() macro is needed by some systems to indicate the end of parameter scanning.

va_start() and va_arg() do not work with parameter lists of functions whose linkages were changed with the #pragma linkage directive.

The va_copy() function creates a copy (dest) of a variable of type va_list (src). The copy appear as if it has gone through a va_start() and the exact set of sequences of va_arg() as that of src.

After va_copy() initializes dest, the va_copy() macro shall not be invoked to reinitialize dest without an intervening invocation of the va_end() macro for the same dest.

Returned value
The va_arg() macro returns the current argument.

The va_end(), va_copy(), and va_start() macros return no values.

	*Const Keyword*
the const type qualifier is used to declare a variable as read-only. This means that the variable cannot be modified once it has been initialized. Here are some reasons why you might want to use const:

Prevent accidental modification: By declaring a variable as const, you can prevent accidental modification of the variable. This can help you write safer and more reliable code.

Improve code readability: When you see a variable declared as const, you immediately know that it cannot be modified, which can make your code more readable and easier to understand.

Allow for compiler optimization: The const keyword tells the compiler that a variable will not change, which can allow it to perform certain optimizations.

Here's an example of how to use const:

const int x = 10;

In this example, the variable x is declared as a constant integer with an initial value of 10. Once x has been initialized, it cannot be modified. If you try to modify x, you will get a compilation error.

You can also use const with pointers, which can be useful for preventing accidental modification of the data that a pointer points to. Here's an example

const int *ptr;

In this example, ptr is a pointer to a constant integer. This means that you cannot modify the integer that ptr points to. However, you can still modify the pointer itself to point to a different integer.

Finally, it's worth noting that const is a type qualifier, which means that it can be used in combination with other type specifiers, such as int, float, or char. For example:

const float PI = 3.14159;

In this example, PI is declared as a constant float with an initial value of 3.14159.
