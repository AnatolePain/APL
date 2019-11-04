#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAILLE_TAB 20

int main(int argc, char * argv[]){

	int i;
	int tab[TAILLE_TAB];
	srand(time(NULL));

	for(i=0;i<TAILLE_TAB;i++){
  	tab[i] = (rand()%41)-20;
 	}

	for(i=0;i<TAILLE_TAB;i++){

		if(tab[i]<=0){
			printf("_ ");
		}else{
			printf("%d ",tab[i]);
		}

	}	
	printf("\n");

	return EXIT_SUCCESS;
}

