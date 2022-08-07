#include<stdio.h>
#include<string.h>

int main(){
    char a[110];
    int i, j, c=0, n, flag=0;
    scanf("%d", &n);
    getchar();
    gets(a);

    if(n<26){
        printf("NO");
    } else{
        strlwr(a);
        for(i=97; i<123; i++){
            for(j=0; j<n; j++){
                if(i==a[j]){
                    c++;
                    break;
                }
            }
        }
        if(c>=26){
            printf("YES");
        } else{
            printf("NO");
        }
    }

    return 0;
}
