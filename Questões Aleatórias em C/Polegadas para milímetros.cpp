#include <stdio.h>
#include <math.h>

int main (){
	float p=0, m=0;

	printf ("Digite a medida em polegadas: ");
	scanf ("%f", &p);
	
	m=p*25.4;
	
	printf ("A medida convertida para o sistema metrico eh: %fmm", m);
		
	return 0;
}
