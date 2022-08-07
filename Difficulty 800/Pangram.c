#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    int i, n, flag=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%c", &a[i]);
    }

    for(i=0; i<n; i++){
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)){
            flag = 0;
        } else{
            flag =1;
        }
    }
    if(flag == 0){
        printf("YES");
    } else if(flag == 1){
        printf("NO");
    }
    return 0;
}
