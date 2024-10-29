#include <stdio.h>

int main(){
	float t1=0, t2=0, t3=0, t4=0, tm=0, qtd25=0, qtd30=0;
	printf ("Digite a temperatura dos 4 municipios: \n");
	scanf ("%f %f %f %f", &t1, &t2, &t3, &t4);
	tm= (t1+t2+t3+t4)/4;
	if (t1<25){
		qtd25++;
	}
	if (t2<25){
		qtd25++;
	}
	if (t3<25){
		qtd25++;
	}
	if (t4<25){
		qtd25++;
	}
	if (t1>30){
		qtd30++;
	}
	if (t2>30){
		qtd30++;
	}
	if (t3>30){
		qtd30++;
	}
	if (t4>30){
		qtd30++;
	}
	printf ("A temperatura media da regiao eh: %f\n", tm);
	printf ("A quantidade de municipios com a temperatura media inferior a 25 graus eh: %f\n", qtd25);
	printf ("A quantidade de municipios com a temperatura media superior a 30 graus eh: %f\n", qtd30);
	
	return 0;
}
