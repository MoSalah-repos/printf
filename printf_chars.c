#include "main.h"
#include <stdlib.h>

/**
 * printf_char - prints a char
 * @_char: char to print
 *
 * Return: always 1
 */
int printf_char(va_list _char)
{
	char ch = (char)va_arg(_char, int);

	_putchar(ch);
	return (1);
}

/**
 * printf_str - prints a string
 * @_str: string to print
 *
 * Return: number of chars printed
 */
int printf_str(va_list _str)
{
	int count;
	char *str = va_arg(_str, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
