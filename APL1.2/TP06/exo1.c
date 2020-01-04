#include<stdio.h>
#include<stdlib.h>
#include<graph.h>


typedef struct image{
        int largeur;
        int hauteur;
        couleur coloris;
}image;


int main(int argc, char * argv[]){

    int i,j,k;

    image bin; 
    FILE* flux;
	flux = fopen("./image.bin", "r");

    fread(&bin.largeur/2,sizeof(int),1,flux);
    if (feof(flux)){
        printf("erreur 01\n");
    }
    fread(&bin.hauteur/2,sizeof(int),1,flux);
    if (feof(flux)){
        printf("erreur 02\n");
    }



    InitialiserGraphique();
    CreerFenetre(200,200,bin.largeur,bin.hauteur);

    printf("fuofhqfug\n");

    for(i=0; i<bin.largeur; i++){

        for(j=0; j<bin.hauteur ; j++){

            /*fread(&bin.coloris,sizeof(bin.coloris),1,flux);*/
            //fseek(flux,sizeof(bin.coloris),SEEK_SET - (SEEK_SET/2));
            ChoisirCouleurDessin(bin.coloris);
            DessinerPixel(i,j);
        }
    }
    
    Touche();
    FermerGraphique();

    return EXIT_SUCCESS;
}
