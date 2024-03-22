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
 * Return: Return of arguments.
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
 * Return: .
 */

int prnt_percen(__attribute__((unused))va_list args)
{
	_putchar('%');

	return (1);
}



/**
 * prnt_int - Print numbers.
 *
 * @args: Number of arguments.
 *
 * Return: Return length of arguments
 */

int prnt_int(va_list args)
{
	int len = 0;
	int val = va_arg(args, int);
	unsigned int num, tmp;
	unsigned int counter = 1;


	if (val < 0)
	{
		len = len + _putchar('-');
		num = val * -1;
	}
	else
	{
		num = val;
	}

	tmp = num;

	while (tmp > 9)
	{
		tmp = tmp / 10;
		counter = counter * 10;

	}
	while (counter >= 1)
	{
		_putchar (((num / counter) % 10) + '0');
		counter = counter / 10;
		len++;
	}
	return (len);
}
