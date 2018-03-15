#include<stdio.h>
int main()
{
  char s[10];
  int i,count=0,count1=0;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
  if(s[i]=='(')
  {
    count++;
  }
  else
  {
    count1++;
  }
  }
  if(count==count1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
