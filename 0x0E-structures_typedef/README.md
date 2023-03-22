0x0E. C - Structures, typedef.
In C programming, a structure is a user-defined data type that allows you to group related data items of different data types into a single unit. It is a collection of data elements, each with its own unique data type. The elements of a structure are called members or fields.

To declare a structure, you use the struct keyword followed by the name of the structure, and then list the members inside curly braces
	example;
		struct student {
    int id;
    char name[20];
    float gpa;
};
This defines a structure called student with three members: an integer id, a character array name, and a float gpa.

You can declare variables of this structure type like any other data type:

go
Copy code
struct student s1;
You can access the members of a structure variable using the dot notation:

python
Copy code
s1.id = 1001;
strcpy(s1.name, "John Doe");
s1.gpa = 3.5;
You can also declare a structure variable and initialize its members in a single line using the following syntax:

java
	struct student s2 = {1002, "Jane Smith", 3.7};

Structures can be used to define complex data types, such as linked lists and trees. They can also be used in function arguments and return values to pass multiple pieces of data as a single parameter.
