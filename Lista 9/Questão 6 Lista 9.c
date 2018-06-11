#include<stdio.h>

int pow(int base,int expo){
	int i,power=1;
	for(i=1;i<=expo;i++){
		power*= base;
	}
	return(power);
}
void main(void){
	int base,expo,resultado;
	printf("Digite o numero que tu quer de base\n");
	scanf("%i",&base);
		printf("Digite o numero que tu quer de expo\n");
	scanf("%i",&expo);
	resultado=pow(base,expo);
	printf("O resultado e: %i",resultado);
}
