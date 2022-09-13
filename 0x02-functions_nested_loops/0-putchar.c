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
	
	for (int i = 0; i < strlen(myWord); i++)
	{
		_putchar(myWord[i]);
	}
	
	_putchar('\n');
	return (0);
}
