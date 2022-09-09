#include <stdio.h>

int main(){
	int n, i, p=0, m=0, ph=0, team=0;
	scanf("%d", &n);
	int a[n+5];
	for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
        if(a[i]==1){
            p++;
        } else if(a[i]==2){
            m++;
        }else if(a[i]==3){
            ph++;
        }
	}

	if(p!=0 && m!=0 && ph!=0){
       team =(p+m+ph)/3;
	}

	if(team == 0){
        printf("0\n");
	}else
        printf("%d\n", team);


	return 0;
}
