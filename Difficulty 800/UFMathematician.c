#include<stdio.h>
#include<string.h>

int main(){

    char a[110], b[110];
    gets(a);
    gets(b);

    for(int i = 0; i < strlen(a); i++){
        if(a[i]==b[i]){
            a[i] = '0';
        } else{
            a[i] = '1';
        }
    }

    puts(a);
    return 0;
}
