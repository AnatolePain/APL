#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	char lettre;
	FILE* flux = fopen(argv[1], "r+");
	if(flux == NULL){
		perror("impossible d'ouvrir le fichier");
		return EXIT_FAILURE;
	}
	
	while(!feof(flux)){

		if(fgetc(flux) ==  argv[2][0]){

			fseek(flux, -1, SEEK_CUR);
			fputc(argv[3][0], flux);
		}
 	}

 	fclose(flux);
	return EXIT_SUCCESS;
}

