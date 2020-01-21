#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct maillons{

	unsigned short int valeur;
	struct maillons* suivant;
};

typedef struct maillons maillons;
typedef struct maillons* liste; 

void affiche(liste li){

	maillons* m;
	for(m=li; m != NULL; m = m->suivant){
		printf("%hu ",m->valeur);
	}
}


void ajoute(liste* p, unsigned short int val){

	maillons* m = (maillons*) malloc (sizeof(maillons));

	m->valeur = val;
	m->suivant = *p;
	*p = m;
}


unsigned short int affichePlusGrand(liste li){

	unsigned short int plusGrand = 0;
	maillons* m;

	for(m=li; m != NULL; m = m->suivant){

		if(m->valeur > plusGrand){
			plusGrand = m->valeur;
		}
	}

	return plusGrand;
}

int main(int argc, char * argv[]){

	srand(time(NULL));
	int i;
	unsigned short int val;

	liste li = NULL;

	val = (rand()%888)+111;


	for(i=0;i<10;i++){

		val = (rand()%888)+111;
		ajoute(&li,val);
	}

	printf("\n");
	affiche(li);
	printf("\n");

	printf("Le plus grand éléments est %hu\n\n",affichePlusGrand(li));

	free(li);

	return EXIT_SUCCESS;
}

