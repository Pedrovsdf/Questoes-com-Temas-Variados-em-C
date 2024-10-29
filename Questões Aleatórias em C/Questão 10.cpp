#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//inicio do programa
int main (){
	
	//declaração das variaveis
	int 	n = 0;
	float	s = 0.0,
			x1 = 70.0,
			x2 = 7.0;
	
	//print e scanf para o numero de termos que o usuario deseja
	printf("Informe o valor de termos da sequencia: ");
	scanf("%d" , &n);
	
	//for para executar a sequencia de termos a ser somada com s
	for(;n != 0;n--){
		
		s += (x1/x2);
		x1 = x1 - 1.0;
		x2 = x2 + 7.0;
		
	}
	//print informando o valor de S
	printf("%.2f \n" , s);
	
	system("pause");
	return 0;
}
