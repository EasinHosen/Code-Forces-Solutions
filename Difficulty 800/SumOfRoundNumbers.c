#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
        int n;
        scanf("%d", &n);
        int a[10];
        int total=0, m=1;
        for(int i=1; i<6; i++){
            a[i] = n%10;
            n = n/10;
            if(a[i] != 0){
                total++;
            }
        }
        printf("%d\n", total);
        for(int i=1; i<6; i++){
            if(a[i] != 0){
                printf("%d ", a[i]*m);
            }
            m = m*10;
        }
        printf("\n");
    }
	return 0;
}

/*int a[10];
	int i, n, tn, t, d, c=0, ctd=0;
	scanf("%d ", &t);
	for(int k=0; k<t; k++)
	{
		scanf("%d", &n);
        ctd=log10(n)+1;
        d=ctd-1;

	for(i=ctd-1; i>=0; i--)
	{
		a[i]=n%10;
		n=n/10;
		if(a[i] !=0){
			c++;
		}
	}

	printf("%d\n", c);
	for(i=0; i<ctd; i++)
	{
		a[i]=a[i]*pow(10, d);
		d--;
		if(a[i] !=0){
			printf("%d ", a[i]);
		}

	}
	c=0;
	d=0;
	printf("\n");
	}*/
