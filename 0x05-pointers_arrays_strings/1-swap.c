#include "main.h"

/**
* swap_int - Swaps values between 2 variables
* @a - First integer
* @b - Second integer
* @hand - Handler that saves the value of the first variable
* Return: 0 (Success)
**/

void swap_int(int *a, int *b)
{
int hand;
hand = *a;
*a = *b;
*b = hand;
}