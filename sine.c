#include<stdio.h>
#include<math.h>
int main()
{
  float x,val,res;
  scanf("%f",&x);
  val=3.14159265/180;
  res=sin(x*val);
  printf("%f",res);
  return 0;
}
