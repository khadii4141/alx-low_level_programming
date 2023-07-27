
#include "main.h"

/**
 * print_sign -  function that prints the sign of a number.
 * @n: integer to be checked
 *
 * Return:1 and prints + if n is greater than zero,
 *and prints 0 if n is zero'
 *and prints - if n is less than zero
 */

	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

