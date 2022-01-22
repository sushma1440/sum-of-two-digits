#include<stdio.h>
int sum(int a);
int main()
{
  int num, results;
  printf("Enter the number:");
  scanf("%d", &num);
  result = sum(num);
  printf("Sum of digits in %d is %d\n",num,result);
  return 0;
}
int sum(int num)
{
  if(num !=0)
  {
    return(num % 10+ sum(num/10));
  }
  else
  {
    return 0;
  }
}

Input
1234
Output
10
