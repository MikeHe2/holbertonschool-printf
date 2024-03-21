#include "main.h"

/**
 * _printf - A simple printf function.
 *
 * @format: A pointer to a string.
 *
 * Return: Returns (-1) if format == NULL, (counter) if complete.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int counter = 0;

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			counter += functs(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}







