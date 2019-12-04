#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv[]){



    /*Struct tm{
        -----------
        -----------
        int tm_year; 
        int tm_mon;
        int tm_mday; 
        -----------
        -----------
    }*/

   
	int x;
    x=time(NULL);
    printf("%d\n",x);

    /*----------------------------------*/



    time_t tempsEnsecondes; /*typedef int time_t de la bibliothèque time.h*/
    struct tm *tempsCal;  /*temps Calandrier*/
    time(&tempsEnsecondes); /*renvoie le temps en secondes depuis 1970*/

    tempsCal = localtime(&tempsEnsecondes); /*envoi dans la structure "pointé"
    										tempsCal la structure tm remplie des 
    										valeurs depuis 1970 en année (tm_years),
    										en mois(tm_years) etc*/

    printf("Date du jour: %d-%d-%d",(*tempsCal).tm_year,(*tempsCal).tm_mon,(*tempsCal).tm_mday);





    return EXIT_SUCCESS;
}
