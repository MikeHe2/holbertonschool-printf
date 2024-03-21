#include "main.h"

/**
 * functs - Seletct what format specifies.
 *
 * @charac: Character to check.
 * @args: The arguments to work with.
 *
 * Return: Number of characters printed.
 */


int functs(const char charac, va_list args)
{
	op_t oper[] = {
		{"c", prnt_char}, {"s", prnt_str},
		{"%", prnt_percen}, {NULL, NULL},
		};

	int i;

	for (i = 0; oper[i].op != NULL; i++)
	{
		if (charac == oper[i].op[0])
		{
			return (oper[i].f(args));
		}
	}
	_putchar('%');
	_putchar(charac);

	return (2);
}

