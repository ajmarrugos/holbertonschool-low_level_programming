#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
putchar(num);
for (num = 'a' ; num <= 'f' ; num++)
putchar(num);
putchar('\n');
return (0);
}
