#include<stdio.h>

int fibo(int n){
	
	int a[n],i;
	a[0]=1;

	for(i=1;i<n;i++){
	a[i]=a[i-1]+a[i-2];	
	}
	return(a[i-1]);

}

int mensagem(void){
	int pos;
	printf("\nEm qual posicao voce quer saber o valor da sequencia:\n");
	scanf("%i",&pos);
	return(pos);
}

void main(void){
	int resultado,num;
	num=mensagem();
	
	resultado=fibo(num);
	printf("O seu valor vai ser %i",resultado);
	
}
