#include<stdio.h>
int op;
float quadrado(float l){
return (l*l);
}
float triangulo(float b, float a){
return ((b*a/2));
}
float retangulo(float b,float a){
return (b*a);
}
float trapezio( float bmen, float bmai, float alt){
return ((bmen*bmai*alt)/2);}
void menu(void){
	printf("\n\n=======================MENU================\n\n");
	printf("Digite uma opcao para ser redirecionado: \n 1- Quadrado \n 2- Triangulo \n 3- Retangulo \n 4- Trapezio \n 5- Sair\n");}
main(){
	float lado,base,altura,basemaior,basemenor,resultado;
	do{
		menu();
	scanf("%i",&op);
	switch(op){
		case 1: printf("\n\n===========Quadrado===========\n\n");
		printf("\nDigite o valor do lado: ");
		scanf("%f",&lado);
		resultado=quadrado(lado);
		printf("\nA area do seu quadrado e: %f",resultado);
		break;
		
		case 2: printf("\n\n ================Triangulo=============\n\n");
		printf("\nDigite o valor da base: ");
		scanf("%f",&base);
		printf("\nDigite o valor da altura: ");
		scanf("%f",&altura);
		resultado=triangulo(base,altura);
		printf("\nA area do seu triangulo e: %f",resultado);
		break;
		
		case 3: printf("\n\n ================Retangulo=============\n\n");
		printf("\nDigite o valor da base: ");
		scanf("%f",&base);
		printf("\nDigite o valor da altura: ");
		scanf("%f",&altura);
		resultado=retangulo(base,altura);
		printf("\nA area do seu retangulo e: %f",resultado);
		break;
		
		case 4 : printf("\n\n ================Trapezio=============\n\n");
		printf("\nDigite o valor da base maior: ");
		scanf("%f",&basemaior);
		printf("\nDigite o valor da base menor: ");
		scanf("%f",&basemenor);
		printf("\nDigite o valor da altura: ");
		scanf("%f",&altura);
		resultado=trapezio(basemaior,basemenor,altura);
		printf("\nA area do seu trapezio e: %f",resultado);
		break;
	}
	}while(op!=5);	
}
