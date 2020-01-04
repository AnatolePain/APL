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

		putchar(m->valeur);
	}
}


void ajoute(liste* p, unsigned short val){

	maillons* m = (maillons*) malloc (sizeof(maillons));

	m->valeur = val;
	m->suivant = *p;
	*p = m;
}


int main(int argc, char * argv[]){

	srand(time(NULL));
	int i;
	unsigned short int val;

	liste li;

	val = (rand()%888)+111;


	for(i=0;i<10;i++){

		val = (rand()%888)+111;
		ajoute(&li,val);
	}

	affiche(li);


	return EXIT_SUCCESS;
}

