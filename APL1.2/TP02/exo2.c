#include<stdio.h>
#include<stdlib.h>


int main(int argc, char * argv[]){

    long unsigned int x, y;

    struct record{
        char a;
        char b;
        char c;
    };

    typedef struct record recordType; 

    printf("test01");

    recordType eng;

    y = sizeof(eng);
    x = sizeof(char)*3;

    printf("x = %lu\n",x);
    printf("y = %lu (recorType)\n",y);


    return EXIT_SUCCESS;
}
