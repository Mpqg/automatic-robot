#include "main.h"
/**
 * _printf - replicate prinft
 *
 * @format: format printf
 * Return: Always 0
 */
int _printf(const char *format, ...)
{

	va_list content;
	int(*printer)(va_list);
	va_arg(content, char *);
	int i = 0;
	int length = 0;

	/**
	 * Validate that text
	 * provided by the user
	 * is empty; In the case
	 * that field is empty should
	 * return -1
	 *
	 */

	/**
	 * Validate that text
	 * provided by the user
	 * starts with '%' and the
	 * next value is empty;
	 */

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{

			printer = get_print(format[i + 1]);

			if (get_print(format[i + 1]))
			{
				length += printer(content);
			}
			else
			{
				length += _putchar(format[i]);
			}
		}
	}

	return (length);
}
