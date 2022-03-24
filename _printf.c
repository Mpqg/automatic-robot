#include "main.h"
/**
 * _printf - replicate prinft
 *
 * @format: format printf
 * Return: Always 0
 */
int _printf(const char *format, ...)
{

	int (*printer)(va_list);
	int length = 0;
	const char *f;
	va_list content;

	va_start(content, format);

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (f = format; *f; f++)
	{
		if (*f == '%')
		{
			f++;
			if (*f == '%')
				length += _putchar(*f), continue;

			printer = get_print(*f);

			if (printer)
				length += printer(content);
		}
		else
		{
			length += _putchar(*f);
		}
	}
	va_end(content);

	return (length);
}
