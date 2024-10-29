#include <stdio.h>
#include <math.h>

int main (){
	float s=0, h=0, v=0;
	
	printf ("Digite o numero de horas que o funcionario trabalhou no mes: ");
	scanf ("%f", &h);
	printf ("Digite o valor recebido por hora de trabalho: ");
	scanf ("%f", &v);
	
	s=v*h;
	
	printf ("O salario bruto do funcionario em um mes eh de: %f", s);
	
	return 0;
}


