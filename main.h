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
	int (*f)(va_list arguments);
} ph;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char *string_to_base(int num, int base);
/** prints text*/
int print_char(va_list arguments);
int print_string(va_list arguments);
/** prints nums*/
int print_int(va_list arguments);
int print_unsigned(va_list arguments);
/** prints basics*/
int print_hexa(va_list arguments);
int print_octal(va_list arguments);
int print_binary(va_list arguments);

#endif
