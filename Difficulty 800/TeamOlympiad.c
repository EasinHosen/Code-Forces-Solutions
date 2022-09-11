#include <stdio.h>

int main()
{
    int n, i, j, p=0, m=0, ph=0, team=0, tc=0;
    scanf("%d", &n);
    int a[n+5];
    int res[1670][3];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==1)
        {
            p++;
        }
        else if(a[i]==2)
        {
            m++;
        }
        else if(a[i]==3)
        {
            ph++;
        }
    }

    team=p;
    if(team>m)
        team=m;
    if(team>ph)
        team=ph;

    if(team == 0)
    {
        printf("0\n");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(a[i]==1)
            {
                res[tc][0]=i;
                tc++;
            }
            if(tc==team)
                break;
        }
        tc=0;

        for(i=1; i<=n; i++)
        {
            if(a[i]==2)
            {
                res[tc][1]=i;
                tc++;
            }
            if(tc==team)
                break;
        }
        tc=0;

        for(i=1; i<=n; i++)
        {
            if(a[i]==3)
            {
                res[tc][2]=i;
                tc++;
            }
            if(tc==team)
                break;
        }
        printf("%d\n", team);
        for(i=0; i<team; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }

    }

    return 0;
}
