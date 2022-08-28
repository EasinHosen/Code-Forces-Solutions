#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(){
    int a[60];
    int t, n, i, j, k, l, flag = 0;
    scanf("%d ", &t);
    for(k=0; k<t; k++){
        scanf("%d", &n);
        for(l=0; l<n; l++){
            scanf("%d", &a[l]);
        }

        if(n==1){
            printf("YES\n");
        } else{
            qsort(a, n, sizeof(int), cmpfunc);
           for(i=0; i<n-1; i++){
                j=i+1;
                int abso = abs(a[i] - a[j]);
                if(abso > 1){
                    flag = 1;
                    break;
                }

        }

        if(flag == 1){
           printf("NO\n");
        }
        else{
           printf("YES\n");
        }
        }
        flag = 0;
    }
    return 0;
}
