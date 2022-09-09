#include <stdio.h>
/**
 *  main - prints the size of various types on the computer
 *Description: using the main function
 *a C program that prints the size of various types on the computer it is compiled and run
 *  Return: 0
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));

	printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));

	printf("Size of a long int: %lu byte(s)\n", sizeof(along));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
