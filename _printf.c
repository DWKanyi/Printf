#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

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
		c = va_arg(args, int);
		putchar(c);
		i++;
		break;
	case 's':
		{
			char *str = va_arg(args, char*);

			while (*str != '\0')
			{
				putchar(*str);
				i++;
				str++;
			}
		}
		break;
	case '%':
		putchar('%');
		i++;
		break;
	}
	}
	else
	{
		putchar(*format);
		i++;
	}
	format++;
	}

	va_end(args);

	return (i);
}
