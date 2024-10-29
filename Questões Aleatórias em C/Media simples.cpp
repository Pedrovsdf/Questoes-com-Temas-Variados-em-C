#include <stdio.h>
#include <math.h>

int main (){
	printf ("A media aritmetica de 1, 2, 4 e 10 eh: %.2f\n", (1.0+2.0+4.0+10.0)/4.0);
	printf ("A media geometrica de 1, 2, 4 e 10 eh: %f\n", pow(1.0*2.0*4.0*10.0, 1.0/4.0));
	printf ("A media harmonica eh: %f\n", 4.0/((1.0/1.0)+(1.0/2.0)+(1.0/4.0)+(1.0/10.0)));
	printf ("A media ponderada  de 1, 2, 4 e 10, com pesos 10, 20, 40 e 100 respectivamente eh: %.2f\n", ((1.0*10.0)+(2.0*20.0)+(4.0*40.0)+(10.0*100.0))/10.0+20.0+40.0+100.0);
	
	return 0;
}
