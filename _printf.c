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
	int count = 0;

	va_list ap;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			switch (*format)
			{
				case 'c':
				{
					int c = va_arg(ap, int);

					putchar(c);
					count++;
					break;
				}

				case 's':
				{
					char *str = va_arg(ap, char *);

					while (*str != '\0')
					{
						putchar(*str);
						count++;
						str++;
					}
					break;
				}

				case '%':
				putchar('%');
				count++;
				break;
			}
		}

		format++;
	}

	va_end(ap);
	return (count);
}

int main()
{

	return (0);
}
