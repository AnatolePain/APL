#include<stdio.h>
#include<stdlib.h>
#include<graph.h>


int main(int argc, char * argv[]){

    int i,j;

    typedef struct image{
        int largeur;
        int hauteur;
        unsigned char r;
        unsigned char v;
        unsigned char b;
    }image;

    image bin; 

    FILE* flux;
	flux = fopen("./save", "r");

    fread(&bin.largeur,sizeof(int),1,flux);
    fread(&bin.hauteur,sizeof(int),1,flux);

    for(i=0; i<bin.largeur ; i++){

        for(j=0; j<bin.hauteur; j++){

            fread(&bin.r,sizeof(int),1,flux);
            fread(&bin.v,sizeof(int),1,flux);
            fread(&bin.b,sizeof(int),1,flux);

            CouleurParComposante(bin.r, bin.v, bin.b);
            DessinerPixel(i,j);
    }

    

    return EXIT_SUCCESS;
}
