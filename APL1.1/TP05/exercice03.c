#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int entier01;
int entier02;
int entier03;

printf("Entrez 3 entiers relatifs : ");
scanf("%d %d %d",&entier01,&entier02,&entier03);

if(entier01> entier02 > entier03){
  printf("%d \n",entier01);
}else if(entier02 > entier01 > entier03){
	printf("%d \n",entier02);  
}else if(entier03> entier01 > entier02){
	printf("%d \n",entier03);
}else if{


}


}else{
	printf("erreur");
}







return EXIT_SUCCESS;
}

