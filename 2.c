#include <stdio.h>
double ad(double n)
{
    double sum = 1;
    while (n)
    {
        sum *= n;
        n--;
    }
    return sum;
}
double fun(double x, double y)
{
    return ad(x) / (ad(y) * ad(x - y));
}
int main()
{
    double a, b;
    do
    {
       scanf("%lf %lf", &a, &b);
    } while (a < b);
    double p = fun(a, b);
    printf("%lf", p);
    return 0;
}