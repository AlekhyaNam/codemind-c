#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }
    for( i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(a[i]==t)
        {
            f++;
        }
    }
    if(f>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}