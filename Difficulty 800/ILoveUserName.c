#include<stdio.h>

int main(){
    int a[1010];
    int c=0, i, j, n, min, max;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(max<a[j]){
                max = a[j];
                c++;
            }
            if(min>a[j]){
                min = a[j];
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}
