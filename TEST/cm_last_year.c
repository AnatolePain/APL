#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define MAX_ARG 6
#define NB_REPETE 1

int tireHasard(int min, int max){
   int x = rand()%((max-min)) + min;	
   printf("TEST01: %d\n",x);
   return x;
}

void verifieTab(int taille, int min, int max,int *tab){

    int indicateur = 0;
    int valRand;
    int i = 0;
    int k = 0;

   for(i = 0 ; i < taille; i++){

        printf("\nTEST 403 tab[i] = %d\n",tab[i]);
        valRand = tireHasard(min, max);

        for(k = 0 ; k < i; k++){
            if(valRand == tab[k]){
                printf("TEST 404 valRand = %d tab[k] == %d \n",valRand, tab[k]);
                indicateur = NB_REPETE;
                printf("indicateur == %d\n", indicateur);
            }

        }

        if(indicateur != NB_REPETE){
            tab[i] = valRand;
            printf("NON NON NON\n");
            indicateur = 0;
        }

        printf("TEST 405 tab[i] = %d\n",tab[i]);

    }

    /*printf("\ni = %d, taille = %d, indicateur = %d", i, taille, indicateur);

    while(i < taille){

        printf("\nTEST 403 tab[i] = %d\n",tab[i]);
        valRand = tireHasard(min, max);

        for(k = 0 ; k < i; k++){
            if(valRand == tab[k]){
                printf("TEST 404 valRand = %d tab[k] == %d \n",valRand, tab[k]);
                indicateur = NB_REPETE;
                printf("indicateur == %d\n", indicateur);
            }

        }

        if(indicateur != NB_REPETE){
            tab[i] = valRand;
            printf("NON NON NON\n");
            indicateur = 0;
            i++;
        }

        printf("TEST 405 tab[i] = %d\n",tab[i]);

    }*/

}

void afficherTab(int *tab,int taille){

    int i;
    for(i = 0 ; i < taille ; i++){
    printf("%d ",tab[i]);
    }
    printf("\n");

}


int main(int argc, char * argv[]){

    int taille = 12;
    int max = 20;
    int min = 0;
    int *tab = NULL;
    srand(time(NULL));

    int i;
    int totaleArg = argc;

    if(totaleArg >= MAX_ARG + 2){
        fprintf(stderr, "erreur: trop d'arguments");
        return  EXIT_FAILURE;
    }else if (totaleArg != 0){
        for (i = 1; i < totaleArg; i=i+2){
            printf("TEST 04 i = %d , %s\n", i, argv[i]);
            if(strcmp(argv[i], "-t") == 0){
                printf("TEST 05\n");
                taille = (int)strtol(argv[i+1], NULL, 10);
                printf("TEST 06, taille = %d\n", taille);
            }else if(strcmp(argv[i], "-M") == 0){
                 printf("TEST 07\n");
                max = (int)strtol(argv[i+1], NULL, 10);
                printf("TEST 08, max = %d\n", max);
            }else if(strcmp(argv[i], "-m") == 0){
                printf("TEST 09\n");
                min = (int)strtol(argv[i+1], NULL, 10);
                printf("TEST 10, min = %d\n", max);
            }
        }

        if (!(min <= max) || !(max-min >= taille)){
            fprintf(stderr, "Les paramètres ne sont pas cohérant");
        }

    }  

    tab = (int*)malloc(taille*sizeof(int));
    verifieTab(taille, min, max,tab);
    printf("\n\n");
    afficherTab(tab,taille);

    return EXIT_SUCCESS;
}

