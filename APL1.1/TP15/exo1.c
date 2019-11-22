#include<stdio.h>
#include<stdlib.h>

int menu(void){
	
	int c;
	int x;
	int r;

	printf("1)Triangle\n");
	printf("2)Carré\n");
	printf("q)Quitter\n");
	printf("Votre choix ? ");
	x = scanf("%d",&c); 

	if(c == 1){
		r = 1;
	}else if(c == 2){
		r = 2;
	}else if(x != 1){
		r = 3;
	}else{
		r = 0;
	}

	return r;
}


void triangle(){

	int ligneActuel;
  int nbDeLignes= 1; /*=hauteur*/
  
  int longLigneActuel;
  int longLigne = 1;
  int n;
  
  printf("Hauteur ?\n");
  scanf("%d",&nbDeLignes); 
  
  for(ligneActuel=1; ligneActuel<nbDeLignes;ligneActuel+=1){
  
    for(longLigneActuel=0; longLigneActuel<longLigne;longLigneActuel+=1){
        
      for(n=0;n<longLigne-((longLigne/2)+ligneActuel);n+=1){
        printf(" ");    
      } 
      
      for(n=0;n<ligneActuel;n+=1){
        printf("*");    
      }   
      
      for(n=0;n<longLigne-((longLigne/2)+ligneActuel);n+=1){
        printf(" ");
      } 
      
    }
    
    printf("\n");
    
  }
  
}


void rect(){

  int ligneActuel;
  int hauteur;
  int i;         
                 
  printf("Hauteur ?\n");
  scanf("%d", &hauteur);
  hauteur--;
        
  for(ligneActuel=0;ligneActuel<=hauteur;ligneActuel++){
        
  if(ligneActuel == 0 || ligneActuel == hauteur){
    for(i=0;i<hauteur;i++){
      printf("*");
    }   
    printf("\n");
  }else{
    printf("*");  
    for(i=0;i<hauteur-2;i++){
      printf(" ");                                                                                                                                                                            
    }   
    printf("*\n");
        
  }     
        
  }   

}

int main(int argc, char * argv[]){

	int q = 1;


 do{

	int n;
	n = menu();

	if(n == 1){
		triangle();
	}else if(n == 2){
		rect();
	}else if(n == 3){
		q = 0;
	}else{
		printf("erreur\n");
	}

 }while(q);

	printf("Au revoir...\n");



return EXIT_SUCCESS;
}

