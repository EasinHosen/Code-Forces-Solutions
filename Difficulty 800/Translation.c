#include<stdio.h>
#include<string.h>

int main(){
    char s[200], t[200];
    char temp;
    int i, ls, flag = 0;
    gets(s);
    gets(t);

    ls = strlen(s)-1;

    for(i=0; i<strlen(s)/2; i++){
       temp = s[i];
       s[i] = s[ls];
       s[ls] = temp;
       ls--;
    }

    for(i=0; i<strlen(s); i++){
        if(s[i]!=t[i]){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("YES");
    } else if(flag == 1){
        printf("NO");
    }

    return 0;
}
