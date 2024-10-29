#include <stdio.h>
#include <math.h>

int main (){
	float 
		g=10.0, 
		v=0, 
		t=0, 
		h=0,
		res=0;

	printf ("Digite o valor da altura atingida pelo objeto: ");
	scanf ("%f", &h);

	printf ("Digite o valor da velocidade inicial do objeto: ");
	scanf ("%f", &v);
	
	t = v / g;
	
	res = (g * pow(t, 2)) / 2 - v * t + h;
	
	printf("O tempo para atingir a altura maxima eh de %f\n", t);
	printf("O tempo para atingir a altura de %.2f eh de %f", h, res);
	
	return 0;
}



