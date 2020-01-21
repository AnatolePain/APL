#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv[]){

int i;
int a;
int b;
int tab[10];
int tabInv[10];
srand(time(NULL));

for(a=0;a<10;a++){
  tab[a] = (rand()%100)-50;	
 }


for(a=0;a<10;a++){
  printf("+-----");
}
printf("+\n");

for(a=0;a<10;a++){
  printf("|%4d ",tab[a]);
}
printf("|\n");

for(a=0;a<10;a++){
  printf("+-----");
}
printf("+\n");



for(i=0,a=9;i<10;i++,a--){
tabInv[i]=tab[a];
}


for(a=0;a<10;a++){         
  printf("+-----");        
}                          
printf("+\n");             
                           
for(a=0;a<10;a++){         
  printf("|%4d ",tabInv[a]);  
}                          
printf("|\n");             
                           
for(a=0;a<10;a++){         
  printf("+-----");        
}                          
printf("+\n"); 




return EXIT_SUCCESS;
}

