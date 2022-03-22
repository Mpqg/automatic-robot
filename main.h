#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct printHandler - struct for agrupate
 * %d, %c, etc... formatters
 * @c: character
 * @f: character func
 *
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list);
} ph;

int _printf(const char *format, ...);
int _putchar(char c);
/** prints text*/
int print_char(char c);
int print_string(char *str);
/** prints nums*/
int print_int(int i);

#endif
