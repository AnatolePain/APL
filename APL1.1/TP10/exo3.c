#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char * argv[]){

double r;
double expo;
char carac;
int i;

printf("entrer un réel: ");
scanf("%lf",&r);

printf("reel en notation scientifique: %e\n",r);

printf("Entrer un caractère: ");
scanf("%c",&carac);
scanf("%c",&carac);

for(i=0; i<5 ; i++){
printf("%c\n",carac);
}


return EXIT_SUCCESS;
}

