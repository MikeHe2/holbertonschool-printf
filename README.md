# holbertonschool-printf

## Explanation

Project in which we will create a more simple version of printf (located in <stdio.h>).
In our custom function we will work only on identifiers %c, %s, %d, %i, %%.

## Requirements for the project

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using
 the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All you files should end with a new line.
- Your code should use the `Betty` style. It will be checked using
 `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- he prototypes of all your functions should be included in your header file called main.h.
- All your header files should be include guarded.
- Your code will be compiled this way:
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \*.c


## Authorized functions and macros

- write (**man 2 write**)
- malloc (**man 3 malloc**)
- free (**man 3 free**)
- va_star (**man 3 va_start**)
- va_end (**man 3 va_end**)
- va_copy (**man 3 va_copy**)
- va_arg (**man 3 va_arg**)

## Task 0

- Handling the identifiers of %c, %s, %%.
- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- write output to stdout, the standard output stream.

## Task 1

- Handling identifiers %d and %i.
- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- write output to stdout, the standard output stream.

## Authors

- Angel Carrasquillo - 8990@holbertonstudents.com
- Michael A. Hernández - 9013@holbertonstudents.com
