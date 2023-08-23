#include "main.h"

/**
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)

	{
	char *p = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++) 
	{
	*p = *src;
	p++;
	src++;
  	}

	for (; i < n; i++)
       	{
	*p = '\0';
	p++;
	}

	return dest;
	}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
-- INSERT --                                                                                                        1,1           All

