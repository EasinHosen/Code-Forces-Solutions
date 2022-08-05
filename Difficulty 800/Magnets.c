#include<stdio.h>

int main(){
    int i, n, g=0;
    int a[100100];

    scanf("%d\n", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        if(a[i] != a[i+1]){
            g++;
        }
    }

    printf("%d", g);
    return 0;
}
