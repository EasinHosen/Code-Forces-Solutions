#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int x, y, n, k;
        scanf("%lld %lld %lld", &x, &y, &n);
        k=(n+y)-(n%x);
        if(k>n)
            k-=x;

        printf("%lld\n", k);

    }
    return 0;
}
