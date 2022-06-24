#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i, j, length, g = 0;
    gets(a);
    length = strlen(a);

    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(a[i]==a[j])
            {
                g++;
                break;
            }
        }
    }
    length = length - g;
    if(length%2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}
