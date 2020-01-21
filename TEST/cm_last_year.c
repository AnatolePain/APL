#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ARG 6
#define NB_REPETE 1
  

void testParam(int* taille, int* max, int* min){

    int i;
    int totaleArg = argc;

    if(totaleArg > MAX_ARG){
        fprintf(stderr, "erreur: trop d'arguments");
    }else if (totaleArg != 0){
        for (i = 1; i < totaleArg + 1; i++){
            if(argv[i] == '-t'){
                *taille = strtol(argv[i++]);
            }

            if(argv[i] == '-m'){
                *max = strtol(argv[i++]);
            }

            if(argv[i] == '-M'){
                *min = strtol(argv[i++]);
            }
        }

        if =(!(min <= max) || !(max-min >= taille)){
            fprintf(stderr; "Les paramètres ne sont pas cohérant");
        }

    }  
}

int tireHasard(int min, int max){
   return (rand()%(max-min)) + min;	
}

void verifieTab(int taille, int min, int max,int *tab){

    int valRand;
    int i, k;

    for(i = 0 ; i < taille ; i++){

        valRand = tireHasard(min, max);

        for(k = 0 ; k < i ; k++){
            if(valRand == tab[k] ){
                indicateur == NB_REPETE;
            }

        }

        if(indicateur == NB_REPETE){
            *tab[i] = valRand;
        }

    }

}

void afficherTab(int *tab, int taille){

    int i;
    for(i = 0 ; i < taille ; i++){
    printf("%d ",*tab[i]);
    }
    printf("\n");

}


int main(int argc, char * argv[]){

    int taille = 12;
    int max = 20;
    int min = 0;
    int *tab = NULL;
    srand(time(NULL));

    testParam(&taille,&max,&min);
    tab = (float*)malloc(taille*sizeof(int));
    verifieTab(taille, min, max,&tab);
    afficherTab(*tab,taille);

    return EXIT_SUCCESS;
}

