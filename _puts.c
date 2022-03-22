#include "main.h"

/**
 * _puts - custom printf
 * @str: text to print
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (i);
}
