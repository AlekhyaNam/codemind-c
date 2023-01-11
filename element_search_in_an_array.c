#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(a[i]==t)
        {
            flag++;
        }
    }
    if(flag>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}