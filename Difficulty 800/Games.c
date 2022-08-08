#include<stdio.h>

int main(){
    int h[110], a[110];
    int c=0, i, j, n;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &h[i], &a[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<=(n-1); j++){
            if(a[i]==h[j]){
                c++;
            }
        }
    }

    for(i=n-1; i>=0; i--){
        for(j=i-1; j>=0; j--){
            if(a[i]==h[j]){
                c++;
            }
        }
    }
    printf("%d", c);

    return 0;
}
