#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int entier;
char c;

printf("Entrez un entireir\n");
scanf("%d",&entier);

c = (char)entier;

printf("%hhd\n",c);


return EXIT_SUCCESS;
}

