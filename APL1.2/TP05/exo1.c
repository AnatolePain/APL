#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

    char texte[100];
    int i = 1;
 
    FILE* flux;
	flux = fopen(argv[1], "r");
	if(feof (flux)){
		perror("Problème fopen\n");
		exit(1);
	}

	while(fgets(texte,sizeof(texte),flux)){

		printf("\033[1;31m");    /*affiche la couleur*/
		printf("%d:", i);
		printf("\033[0m");

		printf(" %s",texte);
		i++;
	}

	printf("\n");

	fclose(flux);



	return EXIT_SUCCESS;
}

