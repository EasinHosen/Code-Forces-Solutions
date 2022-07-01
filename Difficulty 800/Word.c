#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    int i, l, uc=0, lc=0;
    gets(s);
    l = strlen(s);

    for(i=0; i<l; i++){
        if(s[i]>=65 && s[i]<=90){
            uc++;
        }else if(s[i]>=97 && s[i]<=122){
            lc++;
        }
    }

    if(uc>lc){
        puts(strupr(s));
    } else {
        puts(strlwr(s));
    }

    return 0;
}
