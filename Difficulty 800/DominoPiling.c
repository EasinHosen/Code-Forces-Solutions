#include<stdio.h>

int main(){
    int m, n, area, d_block;

    scanf("%d %d", &m, &n);
    if(n<=1){
        d_block = 0;
    } else{
        area = m*n;
        if(area%2==0){
            d_block = area/2;
        } else {
            d_block = (area-1)/2;
        }
    }
    printf("%d", d_block);
    return 0;
}
