#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
      s[i]=s[i]+3;
    }
    printf("%s",s);
    return 0;
}
