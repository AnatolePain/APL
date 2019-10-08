#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int i1;
int i2;

printf("Entrez deux entiers :");
scanf("%d %d",&i1,&i2);

for(i1;i1<i2;i1++){
printf("%d \n",i1);
}

printf("%d \n",i1++);
printf("fin \n");

return EXIT_SUCCESS;
}


