#include <stdio.h>
#include <math.h>

int main (){
	float f=0, c=0;

	printf ("Digite a temperatura em graus Fahrenheit: ");
	scanf ("%f", &f);
	
	c=(5.0/9.0)*(f-32.0);
	
	printf ("Seu equivalente em graus Celsius eh: %f", c);
		
	return 0;
}

