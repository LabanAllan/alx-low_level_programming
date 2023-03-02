pointer is a variable that stores the memory address of another variable.
When you declare a pointer variable, you are essentially asking the computer to reserve some space in memory to store the memory address of another variable. You can then use this pointer to access the value of the variable that it points to, or to modify that value.
A pointer variable points to a data type (like int) of the same type, and is created with the * operator

int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr)

This is explained below;

Create a pointer variable with the name ptr, that points to an int variable (myAge). Note that the type of the pointer has to match the type of the variable you're working with (int in our example).

Use the & operator to store the memory address of the myAge variable, and assign it to the pointer.

Now, ptr holds the value of myAge's memory address.

Dereference

* operator- dereference operator
	You can also get the value of the variable the pointer points to, by using the * operator  .
& reference operator= 

Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.

There are two ways to declare pointer variables in C:

int* myNum;
int *myNum;

take note:
pointers must be handled with care, since it is possible to damage data stored in other memory addresses.
