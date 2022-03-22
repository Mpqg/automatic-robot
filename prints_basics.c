#include "main.h"
#include <stdlib.h>
/**
 * print_hexa - print a hexadecimal
 *
 * @arguments: hexadecimal
 * Return: Always 0
 */
int print_hexa(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, int), 16);

	if (str == NULL)
		return (0);

	return (_puts(str));
}
/**
 * print_octal - prints an octal number
 *
 * @arguments: octal
 *
 * Return: Always 0
 */
int print_octal(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, int), 8);

	if (str == NULL)
		return (0);

	return (_puts(str));
}
/**
 * print_binary - prints a binary number
 *
 * @arguments: binary number
 *
 * Return: Always 0
 */
int print_binary(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, int), 2);

	if (str == NULL)
		return (0);

	return (_puts(str));
}
