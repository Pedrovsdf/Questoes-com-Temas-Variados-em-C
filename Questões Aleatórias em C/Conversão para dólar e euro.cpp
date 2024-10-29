#include <stdio.h>
#include <math.h>

int main (){
	float r=0, d=0, e=0;
	
	printf ("Digite o preco do produto em reais: ");
	scanf ("%f", &r);
	printf ("Digite qual a taxa de conversao para dolares: ");
	scanf ("%f", &d);
	printf ("Digite qual a taxa de conversao para euros: ");
	scanf ("%f", &e);
	
	d=r*d;
	e=r*e;
	
	printf ("O preco do produto convertido para dolares e euros especificamente eh: %f e %f \n", d, e);
	
	
	return 0;
}
