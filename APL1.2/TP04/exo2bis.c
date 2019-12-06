#include<stdio.h>
#include<stdlib.h>
#include<graph.h>


int main(int argc, char * argv[]){

    int i,j,k;

    typedef struct image{
        int largeur;
        int hauteur;
        unsigned char r;
        unsigned char v;
        unsigned char b;
    }image;

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

    InitialiserGraphique();
    CreerFenetre(200,200,bin.largeur,bin.hauteur);

    printf("fuofhqfug\n");

    for(i=0; i<bin.largeur ; i++){

        for(j=0; j<bin.hauteur; j++){

            fread(&bin.r,sizeof(unsigned char),1,flux);
            if (feof(flux)){
                printf("erreur 03\n");
            }
            fread(&bin.v,sizeof(unsigned char),1,flux);
            if (feof(flux)){
                printf("erreur 04\n");
             }
            fread(&bin.b,sizeof(unsigned char),1,flux);
            if (feof(flux)){
                printf("erreur 05\n");
            }

            CouleurParComposante(bin.r, bin.v, bin.b);
            printf("%c,%c,%c\n",bin.r, bin.v, bin.b);
            DessinerPixel(i,j);
        }
    }
    
    Touche();
    void FermerGraphique();

    return EXIT_SUCCESS;
}
