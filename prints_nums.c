#include "main.h"
#include <stdlib.h>
/**
 * print_int - print an integer
 *
 * @i: integer
 * Return: Always 0
 */

int print_int(int i)
{
	if (i >= 0)
	{
		_putchar(i + '\0');
	}
		return (1);
}
/**
 * print_unsigned - print an unsigned integer
 *
 * @i: integer
 * Return: Always 0
 */
int print_unsigned(unsigned int i)
{
	if (i < 0)
	{
		return (NULL);
	}
	_putchar(i);
}
