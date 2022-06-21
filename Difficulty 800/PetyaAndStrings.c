#include<stdio.h>
#include<string.h>

int main(){
    char str[100], str1[100];
    int res = 0;
    gets(str);
    gets(str1);

    strlwr(str);
    strlwr(str1);

    for(int i = 0; i<strlen(str); i++ ){
        if(str[i] == str1[i]){
            res = 0;
        } else{
            if(str[i] > str1[i]){
                res = 1;
                break;
            } else if(str[i] < str1[i]){
                res = -1;
                break;
            }
        }
    }
    printf("\n%d", res);
    return 0;
}
