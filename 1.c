
#include <stdio.h>
int ad(int n)
{
    int sum=1;
    while(n)
    {
        sum*=n;
        n--;
    }
    return sum;
}
int fact(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=ad(i);
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("sum=%d",fact(a));
    return 0;
}