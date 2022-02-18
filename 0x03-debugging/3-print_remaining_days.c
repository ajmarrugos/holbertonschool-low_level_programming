#include "main.h"

/**
* print_remaining_days - Prints how many days remaining
* @d: Input integer for day
* @m: Input integer for month
* @y: Input integer for year
* Return: void
**/

void print_remaining_days(int day, int month, int year)
{
if (year % 4 == 0 || ((year % 400 == 0) && !(year % 100 == 0)))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
