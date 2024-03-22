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
	int val = va_arg(args, int);
	unsigned int num, tmp, len = 0;
	unsigned int counter = 1;

	if (val < 0)
	{
		_putchar('-');
		nums = val * -1;
		len++
	}
	else
	{
		num = val;
	}

	temp = num

	while (temp != 9)
	{
		temp = temp / 10;
		counter = counter * 10;

	}
	while (counter != 0)
	{
		len = len + _putchar (((num / counter) % 10) + '0');
		counter = counter / 10;
	}
	return (len);
}



