#include <stdio.h>
#include <math.h>

int main (){
	float a=1, pa=10, b=2, pb=20, c=4, pc=40, d=10, pd=100, m=0;
	m=(a+b+c+d)/4;
	printf ("A media aritmetica eh: %f\n", m);
	printf ("A media geometrica eh: %.2f\n", pow(a*b*c*d, 1.0/4.0));
	m=4/((1/a)+(1/b)+(1/c)+(1/d));
	printf ("A media harmonica eh: %f\n", m);
	m=((a*pa)+(b*pb)+(c*pc)+(d*pd))/pa+pb+pc+pd;
	printf ("A media ponderada eh: %.2f\n", m);
	
	return 0;
}

