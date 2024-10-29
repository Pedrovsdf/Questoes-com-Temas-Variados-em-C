#include <stdio.h>
#include <math.h>

int main (){
	int a=0, x1=30, x2=10, y1=50, y2=40;
	
	x1=x1-x2;
	y1=y1-y2;
	a=x1+y1;
	
	printf("A distancia Manhattan entre os pontos x1=30, y1=50 e x2=10, y2=40 eh: %d\n", a);
	
	x1=100, x2=50, y1=60, y2=40;
	x1=x1-x2;
	y1=y1-y2;
	a=x1+y1;
	
	printf("A distancia Manhattan entre os pontos x1=100, y1=60 e x2=50, y2=40 eh: %d\n", a);
	
	x1=120, x2=40, y1=30, y2=10;
	x1=x1-x2;
	y1=y1-y2;
	a=x1+y1;
	
	printf("A distancia Manhattan entre os pontos x1=120, y1=30 e x2=40, y2=10 eh: %d\n", a);
	
	x1=90, x2=30, y1=20, y2=5;
	x1=x1-x2;
	y1=y1-y2;
	a=x1+y1;
	
	printf("A distancia Manhattan entre os pontos x1=90, y1=20 e x2=30, y2=5 eh: %d\n", a);
	
	x1=72, x2=34, y1=32, y2=11;
	x1=x1-x2;
	y1=y1-y2;
	a=x1+y1;
	
	printf("A distancia Manhattan entre os pontos x1=72, y1=32 e x2=34, y2=11 eh: %d\n", a);
	
return 0;
}


