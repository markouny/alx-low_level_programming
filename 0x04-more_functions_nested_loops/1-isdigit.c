#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: character to get checked
 * Return: Returns 0 or Returns 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
