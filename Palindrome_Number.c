#include<stdio.h>
int main()
{
  int num, original, digit, reverse = 0;
  printf("Enter the number:");
  scanf("%d",&num);
  original = num;
  while(num!=0)
    {
      digit = num%10;
      reverse = reverse*10+digit;
      num = num%10;
    }
  if (original == reverse)
     printf("%d is palindrome number",original);
  else
    printf("%d is not palindrome number",original);
    return 0;
}
   
  
  
}
