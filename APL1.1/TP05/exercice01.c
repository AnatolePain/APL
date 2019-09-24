#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int entier;
int reste;
int resultat;

printf("entrer un entier naturel: ");
scanf("%d",&entier);

reste = entier%3;

if(reste<2){
 	resultat = entier - reste;
}else{
	resultat = entier + 1;
}

printf("Le multiple de 3 le plus proche est %d \n",resultat);

return EXIT_SUCCESS;
}

