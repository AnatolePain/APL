#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
  int resultat;
	int VraieFaux;
	printf("Entrez un entier :");
	VraieFaux = scanf("%d", &resultat);
	
	
	if(VraieFaux){
		 printf("%d\n", resultat);
     }else{
			 printf("vous n'avez pas entrez un entier\n");
		 }

return EXIT_SUCCESS;
}

