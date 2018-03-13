#include <stdio.h>
#include<string.h>
int main()
{
char s[20];
printf("enter the day");
scanf("%s",&s);
switch(s[0])
{
  case 'm':printf("working day");
                break;
  case 'w':printf("working day");
                break;
  case 't':printf("working day");
                break;
  case 'f':printf("working day");
                break;
   case 's':printf("Holiday");
                break;  
   default:printf("enter the day");
                break;
  }
  return 0;
}
