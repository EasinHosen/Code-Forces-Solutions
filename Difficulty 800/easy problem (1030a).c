#include <stdio.h>

int main(){
	int i, n, flag=0;
	int r[110];
	scanf("%d\n", &n);

	for(i=0;i<n;i++)
	{
		scanf("%d", &r[i]);
	}
	for(i=0;i<n;i++)
	{
		if(r[i]==1)
		{
			flag=1;
		}
	}

	if(flag==0)
	{
		printf("EASY");
	} else
	 {
	 	printf("HARD");
	 }
	 return 0;
}
