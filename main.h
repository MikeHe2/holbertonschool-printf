#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct operations - Struct named operations.
 *
 * @op: The operator.
 * @f: The function associated.
 */

typedef struct operations
{
char *op;
int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar (char c);
int functs(const char charac, va_list args);
int prnt_char(va_list args);
int prnt_str(va_list args);
int prnt_percen(va_list args);

#endif
