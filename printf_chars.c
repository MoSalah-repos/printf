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
}
/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @_char: char to print
 *
 * Return: number of chars printed (always 2)
 */
static int hex_print(char _char)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = _char / 16;
	d[1] = _char % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}

/**
 * printf_STR - prints a string and nonprintable character ascii values
 * @_STR: string to print
 *
 * Return: number of chars printed
 */
int printf_STR(va_list _STR)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(_STR, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * printf_rev - prints astring in reverse
 * @_rev: string to print
 *
 * Return: number of chars printed
 */
int printf_rev(va_list _rev)
{
	char *str;
	int i, count = 0;

	str = va_arg(_rev, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

