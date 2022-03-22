#include "main.h"
/**
 * print_int - print an integer
 *
 * @i: integer
 * Return: Always 0
 */

int print_int(int i)
{
	if (i < 0)
	{
		return (NULL);
	}
	_putchar(i);
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
