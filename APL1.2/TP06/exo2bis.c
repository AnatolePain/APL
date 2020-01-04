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

    int lageurDiv;
    int hauteurDiv;

    image bin; 
    FILE* flux;
	flux = fopen("./image.bin", "r");

    fread(&bin.largeur,sizeof(int),1,flux);
    if (feof(flux)){
        printf("erreur 01\n");
    }
    fread(&bin.hauteur,sizeof(int),1,flux);
    if (feof(flux)){
        printf("erreur 02\n");
    }

    lageurDiv = (int)(bin.largeur/2);
    hauteurDiv = (int)(bin.hauteur/2);


    InitialiserGraphique();
    CreerFenetre(200,200,lageurDiv, hauteurDiv);

    printf("fuofhqfug\n");
    fseek(flux,ftell(flux)/2,SEEK_END);

    for(i=lageurDiv; i<bin.largeur ; i++){

        fseek(flux,sizeof(couleur) * hauteurDiv, SEEK_CUR);

        for(j=hauteurDiv;i> j++){

            fread(&bin.coloris,sizeof(couleur),1,flux);
            ChoisirCouleurDessin(bin.coloris);
            DessinerPixel(i,j);
        }
    }
    
    Touche();
    FermerGraphique();

    return EXIT_SUCCESS;
}
