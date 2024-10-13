#include<stdio.h>
 int main()
{
int i, num;
printf("enter a number:");
scanf("%d",&num);

for(i=2;i*i<=num;i++)
if(num%i==0)
{
printf("the number is not a prime");
return 0;
}
if (num>1)
printf("it is a prime");
else
printf("the number is not a  prime");
return 0;
}