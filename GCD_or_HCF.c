#include<stdio.h>
int main()
{
    int n,a,gcd;
    int i;
    scanf("%d%d",&n,&a);
    for(i=1;i<=n && i<=a;i++)
    {
        if(n%i==0 && a%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}