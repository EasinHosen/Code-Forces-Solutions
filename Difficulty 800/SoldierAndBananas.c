#include <stdio.h>

int main(){
	int w, i, k;
	long int m=0, n;
	scanf("%d%d%d", &k, &n, &w);

	for(i=1;i<=w;i++)
	{
		m=m+(k*i);
	}

	if(m>n)
	{
		printf("%d", (m-n));
	} else
	 {
	 	printf("0");
	 }

	return 0;
}
