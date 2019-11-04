#include<stdio.h>
#include<stdlib.h>
#define CONSTANTE_TOUR 5

int main(int argc, char * argv[]){

int nbMax = 101;
int nbDevin = rand()%nbMax;
int nbUser;
int nTour = 0;

printf("Entrez un nobre entre 0 et 100: ");
scanf("%d",&nbUser);

while(nTour<CONSTANTE_TOUR){

  if(nbUser < nbDevin){
    printf("+\n");
		printf("Reessayer: ");
    scanf("%d",&nbUser);
  }else if(nbUser > nbDevin){
    printf("-\n");
		printf("Reessayer: ");
    scanf("%d",&nbUser);
	}else if(nbUser == nbDevin){
	  printf("Bonne réponse\n");
	}else{
	  printf("Mauvaise réponse\n");
	}

	nTour += 1;
}

return EXIT_SUCCESS;
}

