#include<stdio.h>
int main()
{

    int n, m, c, mc=0, cc=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &m, &c);
        if(m>c)
            mc++;
        else if(c>m)
            cc++;

    }
    if(mc>cc)
        printf("Mishka\n");
    else if(cc>mc)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}
