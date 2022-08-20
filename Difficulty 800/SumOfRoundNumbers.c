#include<stdio.h>
#include<math.h>

int main(){
    int i, t, n, nt, s, d, h, th, m, c, ctd;

    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        nt=n;
        ctd = log10(nt)+1;
        c=ctd;
        if(ctd==1){
            s = nt;
            printf("%d \n%d", c, s);
        } if(ctd)
        s=nt%10;
        nt=
    }

    /*for(i=0; i<t; i++){
        scanf("%d", &n);
        ctd = log10(n)+1;
        rem = n%10;
        if(ctd==1 || (ctd == 2 && rem==0)){
            s=n;
            c=1;
            printf("%d\n%d", c, s);
        } if(ctd == 2 && rem != 0){
            s=rem;
            d=n-(rem);
            c=2;
            printf("%d\n%d %d", c, s, d);
        } if(ctd == 3 && rem == 0){
            s = rem;
            d =((n/10)%10)*10;
            h = ((n/100)%100)*100;
            if(d==0){
                c = 1;
                printf("%d\n%d", c, h);
            } else{
                c = 2;
                printf("%d\n%d %d", c, d, h);
            }

        }

    }*/
    return 0;
}
