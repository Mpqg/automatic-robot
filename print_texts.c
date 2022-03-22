#include "main.h"

/**
 * print_char - prints a character
 * @c: character
 * Return string
 */
int print_char(char c)
{
	if (c == NULL)
		return (NULL);
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 * @str: character
 * Return: string
 */
int print_string(char *str)
{
	int i;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
