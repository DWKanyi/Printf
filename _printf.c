#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: Character string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);

	int i = 0;
	char c;

	for (; *format; format++)
	{
		if (*format == '%')
		{
			putchar(*format);
			i++;
			continue;
		}
		format++;
		if (*format == 'c')
		{
			c = va_args(ap, int);
			putchar(c);
			i++;
		}
		else if (*format == 's')
		{
			char *a = va_args(ap, char*);

			while (*a)
			{
				putchar(*a++);
				i++;
			}
		}
		else if (*format == '%')
		{
			putchar('%');
			i++;
		}
	}
	va_end(ap);
	return (i);
}
