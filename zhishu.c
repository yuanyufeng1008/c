#include <stdio.h>
int main()
{
int a=1;
double b=2.0,sum=1.0,temp;
while(b<=10)
{
  temp = a/b;
  sum = sum - temp;
  b++;
  printf("b--->%f\n",b);
  printf("temp--->%f\n",temp);
  printf("sum--->%f\n",sum);
}
printf("%f\n",sum);
}
