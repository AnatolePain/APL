#include<stdio.h>
#include<stdlib.h>

#define CONSTANTE01 34
#define CONSTANTE02 42
#define TAILLE_TAB 43



double sal(int x, int b){

	if(x >= 0 && x <= CONSTANTE01){
		return (double)(b + (b/CONSTANTE01)*x);
	}else if(x >= CONSTANTE01 && x <= CONSTANTE02){
		return 2*b;
	}else{
		return (double)2*b;
	}
}


/*void remplissageTab(double *tab,int b){

	int i;

	for(i = 0; i  <= CONSTANTE01; i++){
		*tab[i] = sal(i, b);
		printf("TEST01\n");				/*je n'est pas reussi a passer l'adresse du tableaux en argument de la fonctionb*/
	/*}

	for(i = CONSTANTE01; i <= CONSTANTE02; i++){
		*tab[i] = sal(i, b);
		printf("TEST02\n");
	}

}*/


int main(int argc, char * argv[]){


	printf("%f\n", sal(10,1800));
	int i;
	int b = 1800;
	double *tab[TAILLE_TAB];

	/*remplissageTab(tab, 1800);*/



	/*int i;
    for(i = 0 ; i < TAILLE_TAB ; i++){
    	printf("%d \n",tab[i]);
    }
    printf("\n");
*/



	return EXIT_SUCCESS;
}

