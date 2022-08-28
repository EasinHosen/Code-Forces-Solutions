#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==b){
           printf("0\n");
        } else{
            if(abs(a-b)%10 == 0){
                printf("%d\n", abs(a-b)/10);
            } else{
                printf("%d\n", (abs(a-b)/10)+1);
            }
        }
    }

    return 0;
}
