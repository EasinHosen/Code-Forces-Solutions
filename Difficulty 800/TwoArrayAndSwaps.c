#include<stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i, j, n, k, temtot1=0, temtot2=0, tmp;
        scanf("%d %d", &n, &k);
        int a[n], b[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            temtot1+=a[i];
        }
        for(i=0; i<n; i++)
        {
            scanf("%d", &b[i]);
        }

        if(k==0)
        {
            printf("%d\n", temtot1);
        }
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(a[j] <a[i])
                    {
                        tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
            }       //sort a

            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(b[i] < b[j])
                    {
                        tmp = b[i];
                        b[i] = b[j];
                        b[j] = tmp;
                    }
                }
            }       //sort b

            for(i=0; i<k; i++)
            {
                if(a[i]<b[i])
                {
                    a[i]=b[i];
                }
            }
            for(i=0; i<n; i++)
            {
                temtot2+=a[i];
            }
            if(temtot2>temtot1)
                temtot1=temtot2;

            printf("%d\n", temtot1);
        }       //else
        temtot1=0;
        temtot2=0;

    }       //while

    return 0;
}

