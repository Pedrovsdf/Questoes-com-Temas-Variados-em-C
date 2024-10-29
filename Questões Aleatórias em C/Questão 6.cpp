#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//inicio do programa
int main (){
	
	//declaração das variaveis
	float a = 0,
	      b = 0, 
		  c = 0;
	
	//print e scans para saber o valor dos lados do triangulo
	printf("Digite o valor dos lados do triangulo: \n");
	scanf("%f" , &a);
	scanf("%f" , &b);
	scanf("%f" , &c);
	
	//ifs para informar o tipo do triangulo
	if(pow(a,2) > pow(b,2) + pow(c,2) || pow(b,2) > pow(a,2) + pow(c,2) || pow(c,2) > pow(a,2) + pow(b,2)){
	printf("Eh um triangulo retangulo");
	}
	if(a == b && b == c){
	printf("Eh um triangulo equilatero. \n");
	return 0;
	}
	if(a == b && a != c || b == c && b != a || c == a && c != b){
	printf("Eh um triangulo isosceles. \n");
	return 0;
	}else{
	printf("Eh um triangulo escaleno. \n");
	return 0;
	}

	system("pause");
	return 0;
}
