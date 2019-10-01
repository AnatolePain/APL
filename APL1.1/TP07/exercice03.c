#include<stdio.h>
#include<stdlib.h>
#define LONGUEUR_TABL 10


int main(int argc, char * argv[]){

int n1;
int n2;
int longeurTabl = 10;

for(n1=0;n1<longeurTabl+2;n1+=1){

 for(n2=0;n2<longeurTabl+2;n2+=1){
 
	 if(n1 == 0){
	   if(n2==0){
			 printf("\n");
		   printf(" X |");
	   }else{
	     printf("%7d",n2);
	   }
	 }


	 if(n1 == 1){
		 if(n2==0){
			 printf("-----+");
     }else{
	     printf("----");
	   }
   }
		 
	 if(n1>2){
		 if(n2==0){
	     printf(" %d |",n1-2);
	   }else{
	     printf("%7d", (n2-2)*(n1-2));
	   }
	 }

}

 printf("\n");

}

printf("\n");	

return EXIT_SUCCESS;
}
