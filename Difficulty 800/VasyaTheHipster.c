#include<stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d %d", &a, &b);

    if(a<b){
        c=a;
        d = (b-c)/2;
    } else if(a>b){
        c=b;
        d = (a-c)/2;
    } else{
        c=a;
        d=0;
    }
    printf("%d %d", c, d);

    return 0;
}
