#include "main.h"
#include <iostream>
/**
 * print_hexa - print a hexadecimal
 * 
 * @c: hexadecimal 
 * Return: Always 0 
 */
int print_hexa(char *c)
{
	int i;
	if (c == NULL)
		return (NULL);
		
	int p;
	p=(int)*c;
	cout<<p<<endl;

	for (i = 0; i < c; i++)
		_putchar(c[i]);
	return (i);
}
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int print_octal(char *c)
{
}