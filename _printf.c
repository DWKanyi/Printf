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

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				c = va_arg(ap, int);
				putchar(c);
				i++;
				break;

			case 's':
			{
				char *a = va_arg(ap, char*);

				while (*a != '\0')
				{
					putchar(*a);
					i++;
					a++;
				}
			}
			break;

			case '%':
				putchar('%');
				i++
				break;
			}
		}
		else
			putchar(*format);
			i++;

		format++;
	}
	va_end(ap);
	return (i);
}
