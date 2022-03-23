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
	int (*printer)(va_list);

	va_arg(content, char *);
	int i = 0;
	int length = 0;

	if (format == NULL || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{

			printer = get_print(format[i + 1]);

			if (printer)
			{
				length += printer(content);
			}
			else
			{
				length += _putchar(format[i]);
			}
		}
	}
	va_end(content);

	return (length);
}

/**
 * Tes's that fail
 * 2, 5, 7, 9++
 *
 */
