#include<stdio.h>

int main(){
    int i, n;
    scanf("%d", &n);

    for(i=4; i<n/2;i++){
        if(i%2==0 && (
                      (n-i)%2 == 0
                    || (n-i)%3 == 0
                    || (n-i)%5 == 0)
           ){
            break;
        }
    }
    printf("%d %d", i, n-i);
    return 0;
}
