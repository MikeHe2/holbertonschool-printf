#include "main.h"

/**
 * prnt_char - Function that print a char.
 *
 * @args: Char to print.
 *
 * Return: Return 1.
 */

int prnt_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}


/**
 * prnt_str - Print a string.
 *
 * @args: String to print.
 *
 * Return: Number of arguments
 */

int prnt_str(va_list args)
{

	int counter = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(null)";
	}

	while (*string != '\0')
	{
		_putchar(*string++);
		counter++;
	}
	return (counter);
}


/**
 * prnt_percen - Print percent symbol.
 *
 * @args: Is not taken as a format.
 *
 * Return: Return 1.
 */

int prnt_percen(__attribute__((unused))va_list args)
{
	_putchar('%');

	return (1);
}
