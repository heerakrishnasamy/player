#include<stdio.h>
int main()
{
    int a[10],temp,i,j,n,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    }
    for(i=0;i<n;i++)
    {
    if(a[i]==k)
    {
      printf("yes");
      break;
    }
    else
    {
      count++;
    }
}
if(count>0)
{
  printf("no");
}
return 0;
}
