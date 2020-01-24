#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){


	int r , g, b;

	if(argc == 3){
		argv[1] = r;
		argv[2] = g;
		argv[3] = b;
	}else{
		fprintf(stderr, "Trop ou pas assez d'arguments\n");
	}

	printf("le code ne fonctionne pas\n");

	/*il faut ramplacer les "fill" par fill="rgb(r, g, v)"*/

	/*FILE* flux;
	flux = fopen("echiquier.svg", "r");

	char lettre[20];
	FILE* flux = fopen(argv[1], "r+");
	if(flux == NULL){
		perror("impossible d'ouvrir le fichier");
		return EXIT_FAILURE;
	}

	fseek(flux, -1, SEEK_CUR);
	
	while(!feof(flux)){

		if(fgetc(flux) ==  argv[2][0]){

			fseek(flux, -1, SEEK_CUR);
			fputc(argv[3][0], flux);
		}
 	}

 	fclose(flux);
	return EXIT_SUCCESS;*/

return EXIT_SUCCESS;
}

