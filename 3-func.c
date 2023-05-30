#include "main.h"

/**
 * is_printable - checks if character is printable
 * @c: evaluated character
 *
 * Return: 1 if character is printable,
 * otherwise 0
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - convert and append ascii code in
 * hexadecimal to the buffer
 * @buffer: Array of characters
 * @i: position in array to append in
 * @ascii_code: evaluated ascii code
 *
 * Return: Always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - function that verifies if the input is a digit
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, otherwise 0
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - function that casts a number to the specified size
 * @num: Number to be casted
 * @size: cast length
 *
 * Return: Casted value of evaluated number
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - function that casts a number to the specified size
 * @num: Number to be casted
 * @size: cast length
 *
 * Return: Casted value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
