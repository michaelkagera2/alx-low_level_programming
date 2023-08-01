#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_feb;

	if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
	{
		days_in_feb = 29;
	}
	else
	{
		day_in_feb = 28;
	}

	if (month >= 2 && day > (31 + days_in_feb))
	{
		day--;
	}

	if (month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 1, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 + (days_in_feb == 29) - day);
	}
}
