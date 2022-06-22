
#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    int i, j, n;
    char temp;
    gets(arr);

    n = strlen(arr);

    for(i=0; i<n; i+=2)
    {
        for(j = i+2; j<n; j+=2)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i < n; i+=2){
        printf("%c",  arr[i]);
        if(arr[i+1] == '\0'){
            printf("");
        } else{
            printf("+");
        }
    }

    return 0;
}
