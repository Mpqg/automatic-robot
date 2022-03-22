#include "main.h"

/**
 * print_char - prints a character
 * @arguments: character
 * Return: Always 0
 */
int print_char(va_list arguments)
{
	if (c == NULL)
		return (NULL);
	_putchar(va_arg(arguments, int));
	return (1);
}

/**
 * print_string - prints a string
 *
 * @arguments: character
 * Return: string
 */
int print_string(va_list arguments)
{
	char *str = va_arg(arguments, char *);

	return (_puts(str));
}
