#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        sum=sum+a[i];
        }
        else
        {
            sum1=sum1+a[i];
        }
    }
    printf("%d",abs(sum-sum1));
}