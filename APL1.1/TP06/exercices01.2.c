#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int i1;  
int i2;  
         
printf("Entrez deux entiers :");                                                  
scanf("%d %d",&i1,&i2);
         
printf("%d \n",i1);

do{
i1 ++;   
printf("%d \n",i1);
}while(i1<i2);       
         
printf("fin \n");




return EXIT_SUCCESS;
}

