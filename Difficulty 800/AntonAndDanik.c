#include <stdio.h>
#include <string.h>

int main(){
	int i, n, a=0, d=0;
	char arr[100000];
	scanf("%d\n", &n);
	gets(arr);

	for(i=0; i<n; i++){
		if(arr[i]=='A'){
			a++;
		} else d++;
	}
	if(a>d){
		printf("Anton");
	} else if(a<d){
		printf("Danik");
	} else
	 {
	 	printf("Friendship");
	 }
	return 0;
}
