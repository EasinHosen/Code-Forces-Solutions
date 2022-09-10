#include<stdio.h>

int main(){
    int i, n, s=0;
    scanf("%d", &n);
    int a[n+5];
    a[0]=0;
    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }

    for(i=1; i<=n; i++){
        if(a[i]>a[0]){
            a[0]=a[i];
        }
    }

    for(i=1; i<=n; i++){
        s+=(a[0]-a[i]);
    }
    printf("%d", s);

    return 0;
}
