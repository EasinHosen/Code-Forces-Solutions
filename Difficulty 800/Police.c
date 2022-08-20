#include<stdio.h>

int main(){
    int n, i, mp=0, c=0;
    scanf("%d", &n);
    int p[n+1];
    for(i = 1; i <= n; i++){
        scanf("%d", &p[i]);
    }
    for(i = 1; i <= n; i++){
        if(p[i]<0 && mp==0){
            c++;
        }
        if(p[i]>0 && p[i]+p[i+1]==0){
            i++;
        }
        if(p[i]>0 && p[i]+p[i+1]!=0){
            mp = mp+p[i];
            i++;
        }
        if(p[i]<0 && mp!=0){
            mp--;
        }
    }
    printf("%d", c);
    return 0;
}
