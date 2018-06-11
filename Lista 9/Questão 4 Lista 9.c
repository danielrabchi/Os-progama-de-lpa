#include<stdio.h>
// Calculo do fatorial
int fatorial(int i){

	int resultado=1;

	for(;i>1;i--){
		resultado*=i;
}
		
	return(resultado);
}

int mensagem(void){
	int n;
	printf("Digite o numero que voce quer o fatorial\n");
	scanf("%i",&n);
	return(n);
}

void main(void){
	
int resultado,num;

num=mensagem();
resultado=fatorial(num);
printf("O seu fatorial foi %i",resultado);
}
