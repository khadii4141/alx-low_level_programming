# include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (success)
 */
	int main(void)
{
printf("Size of a char:%zu byte(s)\n", sizeof(char));
printf("Size of an int:%zu byte(s)\n", sizeof(int));
printf("Size of a float:%zu byte(s)\n", sizeof(float));
printf("Size of a double:%zu byte(s)\n", sizeof(double));
printf("Size of long int:%zu byte(s)\n", sizeof(long));
printf("Size of long long int:%zu byte(s)\n", sizeof(long long));
return (0);
}


