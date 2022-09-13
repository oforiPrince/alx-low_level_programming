#include "main.h"

/**
 * print_alphabet_x10 - print all alphabets 10 times
 * Description: using print_alphabet function
 * this program prints all alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
	}
	_putchar('\n');
}
