#include<stdio.h>
#include<stdlib.h>


int main(int argc, char * argv[]){

    int x, y;

    struct record{
        char a;
        char b;
        char c;
    } recordType;

    printf("test01");

    y = sizeof(recordType);
    x = sizeof(char)*3;

    scanf("x = %c\n",x);
    scanf("y = %c (recorType)\n",y);





    return EXIT_SUCCESS;
}
