#include<stdio.h>
#include<math.h>
// Atribuição de Variaveis
float a,b,c,x;
// Calculo do Delta
float delta(float a, float b, float c){
	return ((b*b)-(4*a*c));
}
// Calculo de bhaskara, essa porra
float bhaskara(float a,float b,float x){
	int op;
	// A questão pedia para digitar o parametro requisitado
	printf("\n\nDigite a raiz que voce quer: 1-Raiz da soma , 2-Raiz da subtracao ");
	scanf("%i",&op);
	switch(op){
		case 1:
			return (-b+sqrt(x))/(2*a);
			break;
		case 2:
			return (-b-sqrt(x))/(2*a);
			break;
	}
}
// Função main para atribuir valores
void main(void){
	float resultado;
	printf("\n\n Digite o Valor de A: ");
	scanf("%f",&a);
	printf("\n\n Digite o Valor de B: ");
	scanf("%f",&b);
	printf("\n\n Digite o Valor de C: ");
	scanf("%f",&c);
	x= delta(a,b,c);
	printf("%f",x);
	resultado= bhaskara(a,b,x);
	printf("O resultado do seu bhaskara e: %0.2f",resultado);
}


