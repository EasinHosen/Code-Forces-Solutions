#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i, n;
        scanf("%d", &n);
        int a[n+5];
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=1; i<=n; i++)
        {
            if(a[i]!=a[i+1])
            {
                if(i==1 && a[i]!=a[i+2]){
                   printf("%d\n", i);
                }else{
                    printf("%d\n", i+1);
                }
            break;
            }
        }
    }

    return 0;
}
