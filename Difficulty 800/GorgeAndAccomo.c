#include <stdio.h>

int main(){
	int c=0, n, i;
	int p[150], q[150];

	scanf("%d", &n);
	for(i=0;i<n; i++)
	{
		scanf("%d %d", &p[i], &q[i]);
	}

	for(i=0;i<n;i++)
	{
		if((p[i]+1)<q[i])
		{
			c++;
		}
	}

	printf("%d", c);
	return 0;
}
