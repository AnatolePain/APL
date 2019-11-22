#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void inverseTab(int tabInf[]){
  
	int i;
  int a;
  for(i=0,a=9;i<10;i++,a--){
  tabInv[i]=tab[a];   
  } 

}

int  valAleatoire(){

  int a;
  srand(time(NULL));
  a = (rand()%100)-50;
  return a;

}


void afficheTab(int tabf[]){
               
  int a;  

  for(a=0;a<10;a++){
    printf("+-----");
  }           
  printf("+\n");
            
  for(a=0;a<10;a++){
    printf("|%4d ",tabf[a]);
  }           
  printf("|\n");
            
  for(a=0;a<10;a++){
    printf("+-----");
  }           
  printf("+\n");

}



int main(int argc, char * argv[]){

  int a;
  int tab[10];
  int tabInv[10];

  for(a=0;a<10;a++){
    tab[a] = ValAleatoire();	
  }

	afficheTab(tab[10]);
	
	inverseTab(tab[10]);

	afficheTab(tabInv[10];



return EXIT_SUCCESS;
}

