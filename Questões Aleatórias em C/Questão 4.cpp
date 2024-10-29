#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//inicio do programa
int main(){
	
	//declaração de variaveis
	float 	x1 = 0, 
			x2 = 0, 
			x3 = 0,
			ma = 0,
			mg = 0,
			mh = 0,
			mp = 0;
			
	//print e scans para obter os valores das variaveis
	printf("Declare os valores de x1, x2, x3 respectivamente: \n");
	scanf("%f" , &x1);
	scanf("%f" , &x2);
	scanf("%f" , &x3);
	
	//Equaçao para calcular a media aritmetica
	ma = (x1 + x2 + x3)/3.0;
	//Equaçao para calcular a media geometrica
	mg = pow(x1*x2*x3, 1.0/3.0);
	//Equaçao para calcular a media harmonica
	mh = 3.0 / (1.0/x1 + 1.0/x2 + 1.0/x3);
	//Equaçao para calcular a media ponderada
	mp = (1.0*x1+2.0*x2+3.0*x3)/(1.0+2.0+3.0);
	
	//sequencia de prints para informar as medias
	printf("A media aritmetica eh: %.2f \n" , ma);
	printf("A media geometrica eh: %.2f \n" , mg);
	printf("A media harmonica eh: %.2f \n" , mh);
	printf("A media ponderada eh: %.2f \n" , mp);
	
	system("pause");
	return 0;
}
