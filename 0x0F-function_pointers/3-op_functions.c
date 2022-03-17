#include "function_pointers.h"
#include "3-calc.h"

/**
* op_add - Returns the sum of two numbers.
* op_sub - Returns the difference of two numbers.
* op_mul - Returns the product of two numbers.
* op_div - Returns the division of two numbers.
* op_mod - Returns the remainder of the division of two numbers. 
* @a: input one
* @b: input two
* Return: The output of the given operation
**/

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
