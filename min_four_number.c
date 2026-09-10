#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter the four numbers:");
  scanf("%d %d %d %d",&a,&b,&c,&d);

  int min = a;

  if(b < min)
    min = b;
  if(c < min)
    min = c;
  if(d < min)
    min = d;

  printf("Min = %d",min);

  return 0;
}
