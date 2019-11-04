#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int ligneActuel;
int nbDeLignes= 1; //=hauteur

int longLigneActuel;
int longLigne = 1;
int i;
int n;

printf("Hauteur ?\n");
scanf("%d",&nbDeLignes);

for(i=1;i<nbDeLignes;i += 1){
	longLigne += 2;
	printf("%d",longLigne);
}

printf("\n%d",longLigne);


/*for(ligneActuel=1; ligneActuel<nbDeLignes;ligneActuel+=1){

	for(longLigneActuel=0; longLigneActuel<longLigne;longLigneActuel+=1){
    	  
    for(n=0;n<longLigne-((longLigne/2)+ligneActuel);n+=1){
		printf("test01");		
		}

		for(n=0;n<ligneActuel;n+=1){
    printf("*test02");    
    }   

		for(n=0;n<longLigne-((longLigne/2)+ligneActuel);n+=1){
    printf("test03");
    }

	}
printf("\ntest04");

}*/



return EXIT_SUCCESS;
}

