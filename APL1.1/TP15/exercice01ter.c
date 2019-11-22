#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	int ligneActuel;
	int hauteur;
  int i;         
                 
 	printf("Hauteur ?\n");
	scanf("%d", &hauteur);
	hauteur--;

	for(ligneActuel=0;ligneActuel<=hauteur;ligneActuel++){
	
	if(ligneActuel == 0 || ligneActuel == hauteur){
		for(i=0;i<hauteur;i++){
			printf("*");
		}	
		printf("\n");
	}else{
		printf("*");	
		for(i=0;i<hauteur-2;i++){
			printf(" ");
		}
		printf("*\n");
	                                
	}

	}	 

return EXIT_SUCCESS;
}

