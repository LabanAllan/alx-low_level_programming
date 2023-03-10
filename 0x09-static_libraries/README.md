Static libraries.
A static library is a collection of object files that are linked with an executable at compile time to form a single executable file. In other words, a static library is a pre-compiled library that contains code and data that can be used by other programs.

When you create a static library, the code and data are compiled into a single file, which is then linked with the program at compile time. This means that the library becomes an integral part of the executable, and there is no need to load the library at runtime.

One advantage of using static libraries is that they are faster than dynamic libraries because they do not require any runtime linking. Additionally, because the library is linked with the executable at compile time, there is no need to distribute the library separately.

However, there are also some disadvantages to using static libraries. For example, if you update the library, you need to recompile the program to incorporate the changes. Additionally, because the library is linked with the executable, the size of the executable can become very large if the library is large.

In summary, static libraries are a convenient way to include pre-compiled code and data in a program. They offer advantages such as faster performance and ease of distribution but can also have drawbacks such as increased executable size and the need to recompile the program to update the library.
