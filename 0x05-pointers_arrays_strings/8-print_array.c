#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a:name ofarray
 * @n:number of elements of the array to be printed
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int my_array;
for (my_array = 0; my_array < n; my_array++)
{
	printf("%d", a[my_array]);
if (my_array != (n - 1))
{
	printf(" , ");
}
}
	putchar('\n');

}
