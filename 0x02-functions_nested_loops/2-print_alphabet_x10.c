#include "main.h"
/**
* print_alphabet_x10 - Prints from 'a' to 'z' 10 times
* The value of 'az' is given in ASCII format codes
* Return: Always 0 (Success)
**/
void print_alphabet_x10(void)
{
int count, az;
for (count = 0; count <= 9; count++)
{
for (az = 97; az <= 122; az++)
{
_putchar(az);
}
_putchar('\n');
}
}
