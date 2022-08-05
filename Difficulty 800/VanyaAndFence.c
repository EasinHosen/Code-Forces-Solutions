#include <stdio.h>

int main(){
	int c=0, n, h, i;
	int p[1050];

	scanf("%d %d", &n, &h);
	for(i=0;i<n; i++)
	{
		scanf("%d", &p[i]);
	}

	for(i=0;i<n;i++)
	{
		if(p[i]<=h)
		{
			c++;
		} else{
            c+=2;
		}
	}

	printf("%d", c);
	return 0;
}
