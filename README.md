This is a sub-optimal C calculator : it doesn't handle integer under/overflows, only performs basic operations and is slower because it only uses addition, substraction and only the write function.
I will probably add more complex operands later.

Compile with : __cc -Wall -Werror -Wextra main.c operations/\*.c string_manipulation/*.c__
