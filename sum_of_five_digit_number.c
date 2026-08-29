#include<stdio.h>
int main()
{ 
  int num,sum=0;

  printf("Enter the five digit number:");
  scanf("%d",&num);

  while(num > 0)
    {
      sum = sum + num % 10;
      num = num / 10;
    }
  printf("sum = %d", sum);
  return 0;
}
