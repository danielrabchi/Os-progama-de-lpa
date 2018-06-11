#include<stdio.h>
#include<math.h>
float a,b,c,x;
float delta(float a, float b, float c){
	return ((b*b)-(4*a*c));
}
float bhaskara(float a,float b,float x){
	int op;
	printf("\n\nDigite a raiz que voce quer: 1-Raiz da soma , 2-Raiz da subtração ");
	scanf("%i",&op);
	switch(op){
		case 1:
			(-b+sqrt(x))/(2*a);
			break;
		case 2:
			(-b-sqrt(x))/(2*a);
			break;
	}
}
void main(void){
	float resultado;
	printf("\n\n Digite o Valor de A: ");
	scanf("%f",&a);
	printf("\n\n Digite o Valor de B: ");
	scanf("%f",&b);
	printf("\n\n Digite o Valor de C: ");
	scanf("%f",&c);
	x= delta(a,b,c);
	resultado= bhaskara(a,b,x);
	printf("O resultado do seu bhaskara e: %0.2f",resultado);
}


