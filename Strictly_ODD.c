#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],f;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            if(i%2==1)
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}