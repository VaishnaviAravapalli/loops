#include<stdlib.h>
#include<stdio.h>
void main ()
{
    int a[10],sum=0,i,n;
    printf("Enter the size of array(less than 10)");
    scanf("%d",&n);
    printf("enter the  numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    for(i=a[0];i<n;i++)
    {
        if(a[i]<0)
        {
            sum=sum+a[i];
        }
        else
        {
        sum=(n*(n+1))/2;
        }
    }
    printf("Sum is %d",sum);
}