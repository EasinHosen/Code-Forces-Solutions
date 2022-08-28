#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char a[110];
        char b[110];
        int i=0, j=0;

        gets(b);

        if(strlen(b)==2)
        {
            strcpy(a, b);
        }
        else
        {
            for(i =0; i<strlen(b); i+=2)
            {
                a[j] = b[i];
                j++;
            }
            a[j] = b[(i-1)];
            a[j+1] = '\0';
        }

        puts(a);
        printf("\n");
    }
    return 0;
}
