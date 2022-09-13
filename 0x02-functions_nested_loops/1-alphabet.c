#include "main.h"

/**
 *  print_alphabet - prints all the alphabets
 *  Description: using the main function
 *  this program prints all alphabets
 *  Return: 0
*/

void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start < end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
