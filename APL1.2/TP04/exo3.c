#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	int i, j, k;

	FILE* flux;
	flux = fopen("./hexdump", "r");

	short int a;  /*groupe de octet*/

	while(!feof(flux)){

		printf("%07lx ", ftell(flx));

		for(i=0;i<8;i++){

			if(!feof(flux)){
				fread(&a,sizeof(short int),1,flux);
				printf("%x ",a);
			}

		}

		printf("\n");
	}

	printf("%07lx \n", ftell(flux));
	fclose(flux);






return EXIT_SUCCESS;
}

