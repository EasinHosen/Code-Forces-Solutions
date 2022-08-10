#include<stdio.h>

int main(){
    long long int n;
    int i, ld, c=0;
    scanf("%lld", &n);

    for(i=1; n!=0; i++){
        ld = n%10;
        if(ld == 4 || ld == 7){
            c++;
        }
        n = n/10;
    }
    if(c==4 || c==7){
        printf("YES");
    }else
        printf("NO");

    return 0;
}
