#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: half of a string
 */
void puts_half(char *str)
{
	int a, b, full;

	full = 0;

	for (a = 0; str[a] != '\0'; a++)
		full++;

	b = (full / 2);

	if ((full % 2) == 1)
		b = ((full + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}


