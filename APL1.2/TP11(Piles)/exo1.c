#include<stdio.h>
#include<stdlib.h>



struct maillions{
	char valeur;
	struct maillions *pile;
};

typedef struct maillions maillions;
typedef struct maillions* pile;


void push(pile* p, char valeur){

	maillions *m = (maillions*) malloc (sizeof(maillions));

	m->valeur = valeur;
	m->pile= *p;
	*p = m;

}


char pop(pile* p){

	printf("TEST 01\n");
	maillions m = *p;
	free(p);
	*p = m.pile;
	return m.valeur;

}

int empty(pile* p){

	if(*p == NULL){
		return 1;	/*a modifier*/
	}else{
		return 0;
	}
	
}



int main(int argc, char * argv[]){

	pile l = NULL;
	int i;
	char charac[20];

for(i=0;i<6;i++){

	printf("La pile attends vos ordres\n");
	fgets(charac, 20, stdin);
	printf("%c\n",charac[0]);

	if(charac[0] == '-'){
		printf("Le charactère %c a été suprimé\n", pop(&l));
	}else if(charac[0] == '+'){
		printf("Le charactère %c a été ajouté\n", pop(&l));
		push(&l,charac[1]);
	}else{
		printf("Mauvais charactère\n");
	}

}






	return EXIT_SUCCESS;
}

