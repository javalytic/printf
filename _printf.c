#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format.
 * @format: list of types of arguments passed to the function.
 *
 * Return: the number of characters printed excluding the null byte.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*link)(va_list);
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(37);
				count++;
				i = i + 1;
			}
			else
			{
				linkn= format_checker(&format[i + 1]);
				if (link != NULL)
				{
					i = i + 1;
					count += link(ap);
				}
				else
					return (-1);
			}
		}
		else
		{
			_putchar (format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
