#include "main.h"

/**
 * get_print - get functions by flags
 * @c: flag
 * Return: function
 */

int (*get_print(char c))(va_list)
{

	ph handlers[] = {
		{'c', print_char},
		{'s', print_string},
	};
	int i = 0;

	while (handlers[i].c && (handlers[i].c != c))
	{
		i++;
	}

	return (handlers[i].f);
}
