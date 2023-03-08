0x08. C - Recursion
Recursion is a technique in programming where a function calls itself, either directly or indirectly, to solve a problem. Recursion is often used when a problem can be broken down into smaller, similar subproblems. The solution to the overall problem is then obtained by solving the subproblems and combining their solutions.

In the C programming language, recursion can be implemented using a function that calls itself. The function should have a base case, which is the simplest case that can be solved without recursion. The base case allows the recursion to terminate and prevents an infinite loop.

Here is an example of a recursive function in C that calculates the factorial of a number:

	int factorial(int n) {
   if (n == 0) {
      return 1;
   } else {
      return n * factorial(n - 1);
   }
}

This function calculates the factorial of a non-negative integer n. If n is 0, the function returns 1 (the base case). Otherwise, it multiplies n by the result of calling the factorial function with n - 1. The recursion continues until the base case is reached.

Recursion can be a powerful technique for solving certain types of problems, but it can also lead to performance problems if not used carefully. Recursive functions can create a large number of function calls on the program's stack, which can consume a lot of memory and slow down the program. Therefore, it's important to carefully consider the structure of the problem and the recursion before implementing a recursive solution.
In this function, the base case is when n is 0, in which case the function returns 1. Otherwise, the function returns n multiplied by the result of calling itself with n-1.

Recursion can be a powerful tool, but it can also lead to stack overflow errors if the recursion depth is too large. To avoid this, it's important to ensure that the recursive function has a base case that will eventually be reached.
