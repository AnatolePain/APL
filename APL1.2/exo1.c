#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

    int i; int k;
    int indicateur;
    int nb_de_reel = 0;
    float *reel = NULL;

    /*reel = malloc(nb_de_reel*sizeof(float));*/

    reel = (float*)malloc(nb_de_reel*sizeof(float));
    printf("Combien de reel allez vous rentrez ? ");
    scanf("%d",&nb_de_reel);

    for(i = 0, k = 1; i < nb_de_reel ; i++ , k++){
        printf("reel %d: ",k);
        scanf("%f",&reel[i]);
    }

    for(i = 0 ; i < nb_de_reel ; i++){

        indicateur = 0;

        for(k = 0 ; k < nb_de_reel ; k++){
            if(reel[i] == reel[k] ){
                indicateur = 1;
                printf("test %d \n",indicateur);
            }

        }

        if(indicateur != 1){
            printf("%f ,",reel[i]);
        }else{
             printf("test,");
        }

    }


    return EXIT_SUCCESS;
}
