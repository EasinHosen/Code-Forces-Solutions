#include<stdio.h>

int main()
{
    char a[100];
    int i=0, j, n, t;

    scanf("%d %d\n", &n, &t);

    gets(a);

    for(i=0; i<t; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                a[j]='G';
                a[j+1]='B';
                if(a[j+2]!='B')
                    j+=2;
            }
        }
    }

    puts(a);

    return 0;
}
