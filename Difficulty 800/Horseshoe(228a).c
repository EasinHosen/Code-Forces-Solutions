#include <stdio.h>
int main(){
	long long int a[5];
	int i=0, c=0;
	for(i=0;i<4;i++)
	{
		scanf("%lld", &a[i]);
	}
	for(i=0;i<4;i++)
	{
		if(a[i] == a[i+1] || a[i] == a[i+2]
		 || a[i] == a[i+3]){
			c++;
		}
	}
	printf("%d", c);
	return 0;
}
