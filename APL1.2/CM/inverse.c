#include<stdio.h>
#include<stdlib.h>

#define NB_ENTIER 5


struct maillons{

	int valeur;
	struct maillons* suivant;
};

typedef struct maillons maillons;
typedef struct maillons* liste; 


void ajoute(liste* p, int val){

	maillons* m = (maillons*) malloc (sizeof(maillons));

	m->valeur = val;
	m->suivant = *p;
	*p = m;
}

void affiche(liste li, int entier1){

	maillons* m;
	for(m=li; m != NULL; m = m->suivant){
		printf("%d",m->valeur);
		if(!(m->valeur == entier1)){	/*permet de ne pas avoir la en trop*/
			printf(", ");
		}
	}
}


int main(int argc, char * argv[]){

	int i;
	int val;
	int entier1;
	liste li = NULL;


	printf("Entier n°1 : ");		/*permet de ne pas avoir la en trop*/
	scanf("%d",&entier1);
	ajoute(&li,entier1);


	for (i = 1; i < NB_ENTIER; ++i){
		printf("Entier n°%d : ", (i+1));
		scanf("%d",&val);
		ajoute(&li,val);
	}

	affiche(li, entier1);
	printf("\n");

	return EXIT_SUCCESS;
}

