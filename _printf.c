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
	int i;
	char fmt;

	va_list args;

	va_start(args, fmt);
	for (fmt = format; fmt != '\0'; fmt++)
	{
		while (fmt == '%')
		{
			putchar (fmt);
			fmt++;
		}
		switch (fmt)
		{
			case 'c':
				i = va_arg(args, int);
				putchar(i);
				break;

			case 's':
				i = va_arg(args, char);
				putchar(i);
				break;
		}
	}
	va_end(args);
	return (fmt);
}
