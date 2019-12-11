#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int main(int argc, char * argv[]){

    int i,j,k;

    image bin; 
    FILE* flux;
	flux = fopen(argv[1], "r");

    fread(&bin.largeur,sizeof(int),1,flux);
    if (feof(flux)){
        printf("erreur 01\n");
    }

    InitialiserGraphique();
    CreerFenetre(200,200,bin.largeur,bin.hauteur);

    printf("fuofhqfug\n");

    while(){







    	
    }
    
    Touche();
    FermerGraphique();


	return EXIT_SUCCESS;
}

