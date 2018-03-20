#include<stdio.h>
int main()
{
int k,count=0,a,n;
scanf("%d",&a);
scanf("%d",&k);
while(a!=0)
{
n=a%10;
if(n==k)
{
count++;
}
a=a/10;
}
if(count!=0)
{
printf("%d",count);
}
else
{
printf("%d",count);
}
return 0;
}
