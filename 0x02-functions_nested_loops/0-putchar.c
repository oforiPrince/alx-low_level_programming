#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main: prints _putchar
 * Description: a program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char myWord[8] = "_putchar";
	int i = 0;	

	while (i < 8)
	{
		_putchar(myWord[i]);
		i++;
	}
	
	_putchar('\n');
	return (0);
}
