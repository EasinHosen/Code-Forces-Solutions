#include<stdio.h>

int main(){
    int a[100000];
    int c, i, t;
    long long int n;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%lld", &n);
        if(n<3){
            a[i]=0;
        } else if(n%2==0){
            a[i]=(n/2)-1;
        } else{
            a[i] = (n/2);
        }
    }

    for(i=0; i<t; i++){
       printf("%d\n", a[i]);
    }

    return 0;
}
