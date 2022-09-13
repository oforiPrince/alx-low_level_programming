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
	for (i; i < 8; i++)
	{
		_putchar(myWord[i]);
	}
	
	_putchar('\n');
	return (0);
}
