#include <stdio.h>

int main(){
	int i, k;
	long int n;
	scanf("%d %d", &n, &k);

	for(i=1; i<=k;i++)
	{
		if(n%10==0)
		{
			n=n/10;
		} else
		 {
		 	n--;
		 }
	}
	printf("%d", n);
	return 0;
}
