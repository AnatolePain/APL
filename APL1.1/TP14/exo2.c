#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	char tab[200];
	int i;
	int nbe = 0;

	printf("Entrez le texte:\n");
	fgets(tab,200,stdin);

	for(i=0;i<200 && tab[i] != '\n';i++){
		if(tab[i]=='e'){
			nbe = nbe + 1;}
	}
	printf("%d\n",nbe);

	









	return EXIT_SUCCESS;
}

