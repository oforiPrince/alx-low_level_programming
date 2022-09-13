#include "main.h"

/**
 * _isalpha - prints 1 if is a letter, lowercase or uppercase or 0
 * @c : character to check
 * Return : 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
