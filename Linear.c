#include <stdio.h>

int main()
{
  int a[10] = {1, 6, 4, 9, 3, 8, 2, 100, 10, 12};

  int flag, i, item;

  printf("enter the element to be find");
  scanf("%d", item);

  for (i = 0; i < 10; i++)
  {
    if (a[i] == item)
    {
      flag = i + 1;
      break;
    }
    else
    {
      flag = 0;
    }
  }
  if (flag != 0)
  {
    printf("item found at %d location : ", flag);
  }
  else
    printf("item not found");

  return 0;
}
