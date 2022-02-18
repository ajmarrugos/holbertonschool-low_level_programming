#include <stdio.h>

/**
* print_remaining_days - Prints how many days remaining
* @d: Input integer for day
* @m: Input integer for month
* @y: Input integer for year
* Return: void
**/

void print_remaining_days(int d, int m, int y)
{
if ((y % 4 == 0 || y % 400 == 0))
{
if (m >= 3 && d >= 60)
{
d++;
}
printf("Day of the year: %d\n", d);
printf("Remaining days: %d\n", 366 - d);
}
else
{
if (m == 2 && d == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", m, d - 31, y);
}
else
{
printf("Day of the year: %d\n", d);
printf("Remaining days: %d\n", 365 - d);
}
}
}
