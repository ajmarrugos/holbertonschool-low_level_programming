#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char az;
for (az = 'a' ; az <= 'z' ; az++)
{
if (az != 'e' && az != 'q')
putchar(az);
}
putchar('\n');

return (0);
}
