#include "main.h"


/**
* _abs - it computes the absolute value of an integer
* 
* Return: the absolute value
*/
	int _abs(int a)
{
	if (a < 0)
{
	int abs_val;
	abs_val = a * +1;
	return (abs_val);
}
	return (a);
}

