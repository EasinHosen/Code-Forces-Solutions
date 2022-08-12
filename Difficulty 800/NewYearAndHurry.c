#include<stdio.h>

int main()
{
    int i, n, k, r=0, t=0;

    scanf("%d %d", &n, &k);

    r = 240-k;

    for(i=1; i<=n; i++){
        t = t + (5*i);
        if(t>r){
            printf("%d", i-1);
            break;
        }
        if(t==r){
            printf("%d", i);
            break;
        }
        if(i==n && t<r){
            printf("%d", i);
            break;
        }
    }
    return 0;

}
