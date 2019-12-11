#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]){

    FILE* flux;
	flux = fopen("./save", "r");
    if (flux == NULL){
        fprintf(stderr,"Erreur fichier affectation flux\n");
        return EXIT_SUCCESS; /*on peut
    }

    int save;

    fread(&save,sizeof(int),1,flux);
    if (feof(flux)){
        printf("erreur 01\n");
    }

    printf("%d\n",save);


    save++;
    flux = fopen("./save", "w");
    fwrite(&save,sizeof(int),1,flux);

    if (ferror(flux)){
        printf("erreur 02\n");
    }



    fclose(flux);

    return EXIT_SUCCESS;
}
