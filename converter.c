#include "main.h"
/**
 * string_to_base16 - creating a buffer
 *
 * @num: number
 * Return: Always 0
 */
char *string_to_base16(int num)
{
	static char *replace;
	static char buffer[50];
	char *ptr;

	replace = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = replace[num % 16];
		num /= 16;
	} while (num != 0);

	return (ptr);
}
