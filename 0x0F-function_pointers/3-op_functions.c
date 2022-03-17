#include "function_pointers.h"
#include "3-calc.h"

/**
* op_add - adds two numbers
* @a: first number
* @b: second number
* Return: sum of a + b
**/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - substract two numbers
* @a: first number
* @b: second number
* Return: substraction of a - b
**/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplies two numbers
* @a: first number
* @b: second number
* Return: product of a * b
**/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - divides two numbers
* @a: first number
* @b: second number
* Return: division of a / b
**/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - rest of the division of two numbers
* @a: first number
* @b: second number
* Return: rest of the division of a / b
**/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
