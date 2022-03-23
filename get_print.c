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
			{'d', print_int},
			{'s', print_string},
			{'i', print_unsigned},
			{'o', print_octal},
			{'u', print_unsigned},
			{'x', print_hexa},
	};
	int i = 0;

	while (handlers[i].c && (handlers[i].c != c))
	{
		i++;
	}

	return (handlers[i].f);
}
