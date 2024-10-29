#include <stdio.h>
#include <math.h>

int main (){
	float x1=0, y1=0, x2=0, y2=0, d=0;
	
	printf ("Digite as coordenadas do primeiro ponto: \n");
	scanf ("%f %f", &x1, &y1);
	printf ("Digite as coordenadas do segundo ponto: \n");
	scanf ("%f %f", &x2, &y2);
	
	x1= x2-x1;
	y1= y2-y1;
	pow(x1,2);
	pow(y1,2);
	d= x1+y1;
	sqrt(d);
	
	printf ("A distancia euclidiana eh: %f", d);
	return 0;
}
