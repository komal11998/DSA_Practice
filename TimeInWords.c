#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
int main()
{
  int hr, min;
  scanf("%d\n %d\n", &hr, &min);
  char *count[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fiveteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
  if (min == 0)
    printf("%s o' clock", count[hr - 1]);
  else if (min > 30)
  {
    if (min == 45)
      printf("quarter to %s", count[hr]);
    if (min == 59)
      printf("%s minutes to %s", count[min - 1], count[hr]);
    else if (min != 45 && min != 59)
      printf("%s minutes to %s", count[60 - min - 1], count[hr]);
  }

  else if (min <= 30)
  {
    if (min == 1)
      printf("%s minute past %s", count[min - 1], count[hr - 1]);
    if (min == 15)
      printf("quarter past %s", count[hr - 1]);
    if (min == 30)
      printf("half past %s", count[hr - 1]);
    else if (min != 15 && min != 30 && min != 1)
      printf("%s minutes past %s", count[min - 1], count[hr - 1]);
  }
  return 0;
}