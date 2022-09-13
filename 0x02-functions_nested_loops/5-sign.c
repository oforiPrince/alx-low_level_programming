#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n : number to check
 * Descripyion : using the print_sign functuion
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int val;
	if (n > 0)
	{
		_putchar('+');
		val = 1
	}
	else if (n == 0)
	{
		_putchar('0');
		val = 0
	}
	else
	{
		_putchar('-');
		val = -1;
	}
}
