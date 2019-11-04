#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int lun;
int mar;
int mer;
int jeu;
int ven;
int sam;
int dim;

double moyenne;

printf("Entrez le nombre de visiteur:");
scanf("%d %d %d %d %d %d %d",&lun,&mar,&mer,&jeu,&ven,&sam,&dim);

moyenne = ((double)lun + (double)mar + (double)mer + (double)jeu + (double)ven + (double)sam + (double)dim)/7;

printf("\nnombre moyen de visiteur par jour:%lf\n",moyenne); 

return EXIT_SUCCESS;
}

