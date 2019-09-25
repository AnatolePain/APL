#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

double moyenne;
char mention[] = "erreur01";

printf("Entrer votre moyenne au Bac: ");
scanf("%d",&moyenne);

if(0.00 <= moyenne && moyenne < 8.00){
	mention[] = "refusé\n";
}else if(8.00 <= moyenne && moyenne < 10.00){
	mention[] = "rattrapage\n";
}else if(10.00 <= moyenne && moyenne < 12.00){
	mention[] = "passable\n";
}else if(12.00 <= moyenne && moyenne < 14.00){
	mention[] = "assez bie\n";
}else if(14.00 <= moyenne && moyenne < 16.00){
	mention[] = "bien\n";
}else if(16.00 <= moyenne && moyenne < 18.00){
	mention[] = "Très bien\n";
}else if(18.00 <= moyenne && moyenne < 20.00){
	mention[] = "Très bien avec les félicitations du jury\n";
}else{
 mention = "erreur02";
}                                                                                                                                     
                                               
printf("vous avez obtenus la mention %s",mention[]);

return EXIT_SUCCESS;
}

