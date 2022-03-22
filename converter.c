#include "main.h"
/**
 * string_to_base - creating a buffer
 *
 * @num: number
 * @base: 2, 8, 10, 16 depending of the type
 * Return: Always 0
 */
char *string_to_base(int num, int base)
{
	static char *replace;
	static char buffer[50];
	char *ptr;

	replace = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = replace[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
