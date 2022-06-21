#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, x=0;
    char op[4];
    char t;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%c", &t);
        scanf("%s", op);

        if((strcmp(op, "++X")==0) || (strcmp(op, "X++")==0))
        {
            x++;
        }
        else if((strcmp(op, "--X")==0) || (strcmp(op, "X--")==0))
        {
            x--;
        }
    }
    printf("%d", x);
    return 0;
}
