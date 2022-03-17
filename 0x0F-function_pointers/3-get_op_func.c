#include "function_pointers.h"
#include "3-calc.h"

/**
* get_op_func - Selects the function to perform
* the operation asked by the user.
* @s: Operator passed as argument.
* Return: Pointer to the function
**/

int (*get_op_func(char *s))(int, int)
{
op_t op_s[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (op_s[i].op)
{
if (*(op_s[i].op) == *s)
return (op_s[i].f);
i++;
}
return (NULL);
}
