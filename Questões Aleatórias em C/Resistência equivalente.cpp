#include <stdio.h>
#include <math.h>

int main (){
	float re=0, r1=0, r2=0, r3=0;

	printf ("Digite o valor dos tres resistores: \n");
	scanf ("%f %f %f", &r1, &r2, &r3);

	re=(1.0/r1)+(1.0/r2)+(1.0/r3);
	re=1.0/re;
	
	printf ("O valor da resistencia equivalente eh: %f \n", re);
	
	return 0;
}

