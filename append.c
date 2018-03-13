#include <stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i;
    scanf("%s",&s);
    i=strlen(s);
    s[i]='.';
    printf("%s",s);
    return 0;
}
