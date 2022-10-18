#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct print - structure for printing various types
 * @typ: type to print
 * @func: function to print
 */
typedef struct print
{
	char *typ;
	int (*func)(va_list);
} print_typ;

int _putchar(char c);
int _printf(const char *format, ...);

int printf_char(va_list _char);

#endif  /* MAIN_H_ */
