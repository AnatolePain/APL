#include<stdio.h>
#include<stdlib.h>
#include<graph.h>
#include<math.h>


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

	/*DessinerSegment(x1,y1,x2,y2);
	DessinerSegment(x1,y1,x3,y3);
	DessinerSegment(x2,y2,x3,y3);*/

	Sierpinski(x1, y1, x3, y3, xblue, yblue, n-1);
	Sierpinski(x2, y2, xgreen, ygreen, x3, y3, n-1);
	Sierpinski(xred, yred, x2, y2, x1, y1, n-1);

	}

}


int main(int argc, char * argv[]){

	int xred = 350+200*cos(M_PI/2);
	int yred = 350+200*sin(M_PI/2);

	int xgreen = 350+(int)200*cos(11*M_PI/6);
	int ygreen = 350+(int)200*sin(11*M_PI/6);

	int xblue =	50+(int)200*cos(7*M_PI/6);
	int yblue =	350+(int)200*cos(7*M_PI/6);

	int n = 10;
  	InitialiserGraphique();
	CreerFenetre(10,10,700,700);


	/*----------------------------------------------*/

	ChoisirCouleurDessin(CouleurParNom("red"));
	RemplirRectangle(250,50,15,15);

	ChoisirCouleurDessin(CouleurParNom("green"));
	RemplirRectangle(350,250,15,15);

	ChoisirCouleurDessin(CouleurParNom("blue"));
	RemplirRectangle(150,250,15,15);

	/*-------------------------------------------------*/

	/*RemplirTriangle(250,50,350,250,150,250);*/


	DessinerSegment(250,50,350,250);/*red ->green*/
	DessinerSegment(250,50,150,250);/*red ->blue*/
	DessinerSegment(150,250,350,250);/*red ->blue*/



	Sierpinski(xred, yred, xgreen, ygreen, xblue, yblue, n);



	Touche();
	FermerGraphique();
	

return EXIT_SUCCESS;
}

