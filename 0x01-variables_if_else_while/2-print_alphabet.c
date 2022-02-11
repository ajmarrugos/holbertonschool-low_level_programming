#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{

char ch; /* Character value */
for (ch = 'a' ; ch <= 'z' ; ch++) /* Cycle writes characters from A to Z */
putchar(ch);
putchar('\n');

return (0);
}
