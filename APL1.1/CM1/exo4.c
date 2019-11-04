#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NB_LANCER 3

int main(int argc, char * argv[]){

	int i;
	int j = 0;
	char ouiNon = 'o';
	char suprTampon;
	int tab[NB_LANCER];
	srand(time(NULL));

  while((ouiNon == 'o') && (j<NB_LANCER)){ /*le while continu tant que la reponse est oui
																		        et que le nombre de tour ne dépasse pas 3*/
	
		for(i=0;i<NB_LANCER;i++){  /*remplissage du tableaux...*/
  		tab[i] = (rand()%6)+1;   /*...de 3 valeurs compris entre 0 et 6*/
 		}

		for(i=0;i<NB_LANCER;i++){  /*affichage du tableaux*/
			printf("[%d] ",tab[i]);
		}
		printf("\n");

		printf("relancer (o/n) ?"); 
		scanf("%c", &ouiNon);
		scanf("%c", &suprTampon);  /*bug sinon car \n est dans le tampons*/

		j = j+1;
	}

	if((tab[i] == (2||4||1))
			&& (tab[i+1] == (2||4||1)) /*verifie si chaque...*/
			&& (tab[+2] == (2||4||1))){ /*...valeur du tableaux vaux 4, 2 ou 1*/ 

		printf("vous avez gagné\n");
	}else{
	  printf("vous avez perdu\n");
	}



	return EXIT_SUCCESS;
}

