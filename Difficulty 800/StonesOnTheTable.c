#include<stdio.h>

int main(){
    int i, n, c=0;
    char s[100];
    scanf("%d\n", &n);
    gets(s);

    for(i=0; i<n; i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
