#include <stdio.h>
#include <math.h>

int main (){
	float v1=0, v2=0, o=0;
	printf ("Digite 1 para adicao, 2 para divisao, 3 para multiplicacao e 4 para divisao: \n");
	scanf ("%f", &o);
	printf ("Digite dois valores: \n");
	scanf ("%f %f", &v1,&v2);
	if (o==1){
		v1= v1+v2;
	}
	if (o==2){
		v1= v1-v2;
	}
	if (o==3){
		v1= v1*v2;
	}
	if (o==4){
		v1= v1/v2;
	}
	printf ("O resultado eh:%f", v1);
	return 0;
}
