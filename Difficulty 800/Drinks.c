#include<stdio.h>

int main(){
    double n;
    double a[120];
    double sum=0.0;
    scanf("%lf\n", &n);
    for(int i=0; i<n; i++){
        scanf("%lf", &a[i]);
        sum+=a[i];
    }

    printf("%lf", sum/n);
    return 0;
}
