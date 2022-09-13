#include<stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int i, c=1, n, k, v=1;

        scanf("%d", &n);

        while(c<=n)
        {
            if(v%3!=0 && v%10!=3)
            {
                k=v;
                c++;
            }
            v++;
        }
        printf("%d\n", k);
    }

    return 0;
}
