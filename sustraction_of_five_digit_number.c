#include<stdio.h>
int main()
{ 
  int num,sub,digit;

  printf("Enter the five digit number:");
  scanf("%d",&num);

 sub = 0;

  while(num > 0)
    {
      digit = num % 10;
      sub = sub - digit;
      num = num / 10;
    }

  printf("Substraction = %d", sub);
  return 0;
}
