#include <stdio.h>

int main(){
	int a[1000], b[1000];
	int i, n, c=0, m=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	for(i=0;i<n;i++)
	{
		c=(c-a[i])+b[i];
		if(c>m)
		{
			m=c;
		}
	}
	printf("%d", m);
	return 0;
}
