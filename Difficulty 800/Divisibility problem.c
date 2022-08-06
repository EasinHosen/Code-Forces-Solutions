#include<stdio.h>

int main(){
    long long int a[10100], b[10100], c[10100];
    long long int m=0, n=0, p=0;
    int i, t;
    scanf("%d", &t);

    for(i=0; i<t; i++){
        scanf("%lld %lld", &a[i], &b[i]);
    }

    for(i=0; i<t; i++){
        if(a[i]<b[i]){
            c[i] = b[i]-a[i];
        } else{
            m = a[i]%b[i];
            if(m == 0){
                c[i] = 0;
            } else{
                c[i] = b[i]-m;
            }
        }
        printf("%lld\n", c[i]);
    }

    /*for(i=0; i<t; i++){
        if(a[i]%b[i] == 0){
            c[i] = 0;
        } else{
            for(j=1; m<=a[i]; j++){
                m = b[i]*j;
            }
            c[i] = m-a[i];
            m = 0;
        }
    }

    for(i=0; i<t; i++){
        printf("%lld\n", c[i]);
    }*/
    //time limit exceeded

    return 0;
}
