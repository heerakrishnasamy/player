#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,s;
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
   if(n%i==0)
   {
     s=n/i;
   if(s%2!=0)
   {
     printf("%d ",s);
   }
   }
  }
  return 0;
}
