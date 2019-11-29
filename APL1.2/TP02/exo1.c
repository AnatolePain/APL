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

    int y;
    int z;
    long long int x = 0;

    time_t tempsBrute;
    z = time(NULL);
    //struct tm *structPointeVersTempsBrute = &tempsBrute;
    struct tm *tempsIso= localtime(&z);
    y = (*tempsIso).tm_year;

    printf("%d\n",y);

    x=time(NULL);
    printf("\n%lld\n",x);



    return EXIT_SUCCESS;
}
