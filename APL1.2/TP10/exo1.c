#include<stdio.h>
#include<stdlib.h>


/*

A partir de 100 on enlève 10 à une fonction ou on à rajouté "à elle" rajouté 11 : donc 1
puis s'équilibre 

*/

int f(int n) { 
  if (n>100)
    return n-10;
  else
    return f(f(n+11));
}

int main(int argc, char * argv[]){


	int a = 6;
	printf("%d\n",f(a));




	return EXIT_SUCCESS;
}

