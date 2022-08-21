#include<stdio.h>

int main(){
    long long int num[5];
    long long int max=0;
    int i, maxInd;
    for(i=0; i<4; i++){
        scanf("%lld", &num[i]);
        if(max<num[i]){
            max=num[i];
            maxInd = i;
        }
    }
    for(i=0; i<4; i++){
        if(i != maxInd){
             printf("%lld ", num[maxInd]-num[i]);
        }
    }
    return 0;
}
