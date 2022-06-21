#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    char nStr[1000];
    int i = 0;
    gets(str);
    nStr[0] = toupper(str[0]);
    for(i=1; i<=strlen(str); i++){
        nStr[i] = str[i];
    }
    puts(nStr);
    return 0;
}
