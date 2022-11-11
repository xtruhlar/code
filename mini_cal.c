#include <stdio.h>
#include <stdbool.h>

/*bool is_leap_year(int year) {
  if (year % 4 != 0) {
    return false;
  } else if (year % 100 != 0) {
    return true;
  } else if (year % 400 != 0) {
    return false;
  } else {
    return true;
  }
}*/

bool is_leap_year(int year)
{
  /*
A leap year has to be divisible by 4 and NOT divisible by 100 except when the year is divisible by 400.
*/
  return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int, int *dd, int *yy, int days_left_to_add)
{
  int days_left_in_month;

  while (days_left_to_add > 0)
  {
    days_letf_in_month = days_in_month[*mm] - days_letf_to_add;

    if (*mm == 2 && is_leap_year(*yy))
    {
      days_left_in_month++;
    }
  }
}

int main()
{
  int year;
  int month;
  int day;

  printf("Input year in range <1800 - 10 000>: ");
  scanf("%d", &year);

  is_leap_year(year);

  if (is_leap_year(year))
  {
    printf("Leap Year");
  }
  else
  {
    printf("Not Leap Year");
  }
}