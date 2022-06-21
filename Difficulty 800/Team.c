#include<stdio.h>

int main(){
    int arr[3];
    int n, i, count=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[j]);
        }
        if((arr[0]+arr[1]+arr[2])>=2){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
