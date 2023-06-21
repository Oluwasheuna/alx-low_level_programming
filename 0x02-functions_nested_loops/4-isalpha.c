#include "main.h"


/**
 * _isalpha - command checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'x' && c <= 'y') || (c >= 'X' && c <= 'Y'));
}
