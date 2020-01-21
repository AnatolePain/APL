#include<stdio.h>
#include<stdlib.h>
#include<graph.h>


void Sierpinski(int xred, int yred, int xgreen, int ygreen, int xblue, int yblue, int n){



	if(n>0){
	
	DessinerSegment(xblue,yblue,xred,yred);
	DessinerSegment(xred,yred,xgreen,ygreen);
	DessinerSegment(xgreen,ygreen,xblue,yblue);

	/*------nouveau point----------*/

	int x2 = (int)(xred+xgreen)/2;
	int y2 = (int)(yred+ygreen)/2;

	int x1 = (int)(xred+xblue)/2;
	int y1 = (int)(yred+yblue)/2;

	int x3 = (int)(xgreen+xblue)/2;
	int y3 = (int)(ygreen+yblue)/2;

	/*------nouvelle longeur----------*/

	Sierpinski(x1, y1, x3, y3, xblue, yblue, n-1);
	Sierpinski(x2, y2, xgreen, ygreen, x3, y3, n-1);
	Sierpinski(xred, yred, x2, y2, x1, y1, n-1);

	}

}


int main(int argc, char * argv[]){

	int xred = 500;
	int yred = 50;

	int xgreen = 800;
	int ygreen = 600;

	int xblue =	100;
	int yblue =	600;

	int n = 8;

  	InitialiserGraphique();
	CreerFenetre(10,10,1000,800);


	/*----------------------------------------------*/

	ChoisirCouleurDessin(CouleurParNom("red"));
	RemplirRectangle(250,50,15,15);

	ChoisirCouleurDessin(CouleurParNom("green"));
	RemplirRectangle(350,250,15,15);

	ChoisirCouleurDessin(CouleurParNom("blue"));
	RemplirRectangle(150,250,15,15);

	/*-------------------------------------------------*/

	/*RemplirTriangle(250,50,350,250,150,250);*/

/*
	DessinerSegment(250,50,350,250);
	DessinerSegment(250,50,150,250);
	DessinerSegment(150,250,350,250);

*/

	Sierpinski(xred, yred, xgreen, ygreen, xblue, yblue, n);



	Touche();
	FermerGraphique();
	

return EXIT_SUCCESS;
}

