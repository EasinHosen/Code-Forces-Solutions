#include<stdio.h>
#include<string.h>

int main(){
    char word[100];
    int i, n, len;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", word);
        len = strlen(word);
        if(len>10){
            printf("%c%d%c", word[0], len-2, word[len-1]);
        } else{
            printf("%s", word);
        }
        printf("\n");
    }
    return 0;
}


//too complex
/*int main(){
    char word[100][100];
    int length, n, i;

    scanf("%d", &n);
    for(i=0; i<=n; i++){
        gets(&word[i]);
    }
    for(i=0; i<=n; i++){
        length = strlen(word[i]);

        if(length>10){
            printf("%c%d%c", word[i][0], length-2, word[i][length-1]);
        } else{
            puts(word[i]);
        }
        printf("\n");
    }
    return 0;
}
*/

