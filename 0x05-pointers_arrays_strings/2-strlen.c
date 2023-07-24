#include "main.h"

/**
 * _strlen - checking the lenght of a string
 *@s: string
 *Return: string lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
