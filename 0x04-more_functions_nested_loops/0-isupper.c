#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 *  c:  the int that will use for the argument of the function
 * Return: 1 if uppercase otherwise return to 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
