#include<stdio.h>

int main()
{
    int a[5][5];
    int i=0, j=0, count = 0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                //how far from the 22 position
                count = abs(2-i)+abs(2-j);
            }
        }

    }
    printf("%d", count);
    return 0;
}
