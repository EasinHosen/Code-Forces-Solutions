#include<stdio.h>
#include<string.h>

int main(){
    char ph[100];
	int i, n, faces = 0, total = 0;

	scanf("%d\n", &n);

	for(i=0; i< n ; i++) {
		gets(ph);

		if(strcmp(ph, "Tetrahedron")==0){
            faces = 4;
        } else if(strcmp(ph, "Cube")==0){
            faces = 6;
        } else if(strcmp(ph, "Octahedron")==0){
            faces = 8;
        } else if(strcmp(ph, "Dodecahedron")==0){
            faces = 12;
        } else if(strcmp(ph, "Icosahedron")==0){
            faces = 20;
        }

        total = total + faces;
	}

    printf("%d", total);

    return 0;

}
