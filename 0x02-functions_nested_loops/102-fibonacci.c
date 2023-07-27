#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0
 */

	int main(void)
	{
		int count;
		unsigned long numb1 = 0, numb2 = 1, sum;


		for (count = 0; count < 50; count++)
		{
			sum = numb1 + numb2;
			printf("%lu", sum);


			numb1 = numb2;
			numb2 = sum;


			if (count == 49)
				printf("\n");
			else
				printf(", ");
		}


		return (0);
	}

