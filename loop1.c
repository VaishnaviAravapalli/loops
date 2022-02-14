#include <stdio.h>
#include<stdlib.h>
int main()
{
  double p,q,sum;
  char ch;
  printf("Enter 2 numbers");
  scanf("%lf %lf",&p,&q);
  printf("Enter you choice");
 gets(ch);
    switch(ch)
  {
  case 'a': printf("Sum of two numbers is %lf",p+q);
  break;
  case 's' : printf("difference of two numbers is %lf",p-q);
  break;
  default :
  printf("Invalid choice");
}
