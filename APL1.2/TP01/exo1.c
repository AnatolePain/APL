#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

    int i; int k;
    int indicateur;
    int nb_de_reel = 0;
    float *reel = NULL;

    printf("Combien de reel allez vous rentrez ? ");
    scanf("%d",&nb_de_reel);
    reel = (float*)malloc(nb_de_reel*sizeof(float));

    for(i = 0, k = 1; i < nb_de_reel ; i++ , k++){
        printf("reel %d: ",k);
        scanf("%f",&reel[i]);
    }

    for(i = 0 ; i < nb_de_reel ; i++){

        indicateur = 0;

        for(k = 0 ; k < nb_de_reel ; k++){
            if(reel[i] == reel[k] ){
                indicateur++;
            }

        }

        if(indicateur < 2){
            printf("%f ",reel[i]);
        }

    }

    printf("\n");

    return EXIT_SUCCESS;
}
