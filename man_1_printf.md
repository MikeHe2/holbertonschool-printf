## _PRINTF(3) - custom library functions manual

### NAME

'_printf' - format and print data

### SYNOPSIS
'''C
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

- int _printf(const char *format, ...);
- int _putchar (char c);
- int functs(const char charac, va_list args);
- int prnt_char(va_list args);
- int prnt_str(va_list args);
- int prnt_percen(va_list args);

### DESCRIPTION

'_printf' function formats and prints data to standard output according to format string.

Conversion specificiers are introduced with % and then have a format cote that specify the data type to be formatted

such as

- %c: Formats and prints a single character.
- %s: Formats and prints a string of characters.
- %d: Formants and prints a signed decimal integer.
- %i: Formats a prints a signed decimal integer (same as %d).
- %%: Formats and prints a single percent sign

### OPTIONS



### RETURN VALUE

the '_printf' function returns the numbers of characters printed (excluding null byte also known as nul or ('\0)) on error returns a negative value

### ERRORS

'_printf' function may fail if:

- Format string is invalid
- An argument does not have correct data type
- There are not enough arguments to satisfy all format specifiers.

### AUTHORS
- Angel Carrasquillo
- Michael A. Hernández
