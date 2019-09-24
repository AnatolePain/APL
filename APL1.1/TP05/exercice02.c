#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int entierR1;
int entierR2;
int resultat;
char signe;

printf("entrez un entier relatif: ");
scanf("%d",&entierR1);

printf("entrez un deuxieme entier relatifi: ");
scanf("%d",&entierR2);

resultat = entierR1*entierR2;

if(resultat<0){
 signe = '-';
}else{
  signe = '+';
}

printf("Le signe est: %c \n",signe);







return EXIT_SUCCESS;
}

