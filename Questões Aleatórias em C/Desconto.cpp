#include <stdio.h>
#include <math.h>

int main (){
	int c=0;
	float p=0, d1=0, d2=0;
	
	printf ("Digite o valor do codigo do produto: ");
	scanf ("%d", &c);
	
	printf ("Digite o valor do produto: ");
	scanf ("%f", &p);
	
	if (c != 1 && c !=2){
		printf ("O total a pagar eh: %f\n", p);
		printf ("Nao houve desconto.");
		return 0;
	}
	
	if (c == 1){
		d1 = p * 0.2;
		p = p - d1;
	}
	if (c == 2){
		d1 = p * 0.1;
		p = p - d1;
	}
	
	if (p >= 80.0){
		d2 = p * 0.1;
		p = p - d2;
	}
	d1 = d1 + d2;
	
	printf ("O total a pagar eh: %f\n", p);
	printf ("O desconto dado foi de: %f\n", d1);
	
	return 0;
}
	
