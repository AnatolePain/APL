#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct maillons{

	char valeur;
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


void ajoute(liste* p, char val){

	maillons* m = (maillons*) malloc (sizeof(maillons));

	m->valeur = val;
	m->suivant = *p;
	*p = m;
}


void tableauxVersChaine(liste* li,char tab[]){


	int a = strlen(tab);
	int i;

	for(i=a; i>-1; i-- ){
		ajoute(li,tab[i]);
	}

}

void listeVersTableaux(char* tab[],liste li){


	int* p = NULL;
	p = (char*)malloc();

	maillons* m;
	for(m=li; m != NULL; m = m->suivant){
		putchar(m->valeur);
	}


}

void freeListe(maillons* premier){ /*A compendre : notation des variables étrange*/

	maillons* p;
	for(p=premier; p != NULL; p = p->suivant){
		free(p);
	}

}




int main(int argc, char * argv[]){

	char val1, val2, val3, val4;

	liste li = NULL;  /*important sinon l'adresse de la structure n'existe pas*/

	/*val1 = 't';
	val2 = 'e';
	val3 = 's';
	val4 = 't';

	ajoute(&li,val4);
	ajoute(&li,val3);
	ajoute(&li,val2);
	ajoute(&li,val1);*/

	tableauxVersChaine(&li, "bonjour");
	listeVersTableaux(&tab, li);
	affiche(li);
	printf("\n");

	freeListe(li);

	return EXIT_SUCCESS;
}

