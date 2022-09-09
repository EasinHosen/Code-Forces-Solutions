#include <stdio.h>

int min(int x, int y, int z){
	if(x<y && x<z)
		return x;
	else if(y<z)
		return y;
	else
		return z;
}

int main(){
	int n, k, l, c, d, p, nl, np, x, y, z, toast=0;
	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

	x=((k*l)/nl);
	y=(c*d);
	z=(p/np);
	toast = min(x,y,z)/n;
	printf("%d\n", toast);
	return 0;
}
