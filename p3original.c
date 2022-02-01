#include<stdio.h>
int input()
{
  int n;
  printf("enter any  number :");
  scanf("%d",&n);
  return n;
}
int add(int n)
{
  int sum=0,i;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
int output(int sum)
{
  printf("sum is :%d",sum);
}
int main()
{
  int sum,n;
  n=input();
  sum=add(n);
  output(sum);
  return 0;
}
