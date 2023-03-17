More malloc, free'

The malloc() function stands for memory allocation. It is a function which is used to allocate a block of memory dynamically. It reserves memory space of specified size and returns the null pointer pointing to the memory location. The pointer returned is usually of type void. It means that we can assign malloc function to any pointe.

Syntax
ptr = (cast_type *) malloc (byte_size);
Here,

ptr is a pointer of cast_type.
The malloc function returns a pointer to the allocated memory of byte_size.
 e.g 
	ptr = (int *) malloc (50)

example of malloc implementation.

#include <stdlib.h>
int main(){
int *ptr;
ptr = malloc(15 * sizeof(*ptr)); /* a block of 15 integers */
    if (ptr != NULL) {
      *(ptr + 5) = 480; /* assign 480 to sixth integer */
      printf("Value of the 6th integer is %d",*(ptr + 5));
    }
}

	output
	Value of the 6th integer is 480

sizeof(*ptr) was used instead of sizeof(int) in order to make the code more robust when *ptr declaration is typecasted to a different data type later.

The allocation may fail if the memory is not sufficient. In this case, it returns a NULL pointer. So, you should include code to check for a NULL pointer.

Keep in mind that the allocated memory is contiguous and it can be treated as an array. We can use pointer arithmetic to access the array elements rather than using brackets [ ]. We advise to use + to refer to array elements because using incrementation ++ or += changes the address stored by the pointer.

	Malloc function can also be used with the character data type as well as complex data types such as structures.
