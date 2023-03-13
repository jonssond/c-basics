#include <stdio.h>

int main(){
	
	int nascimento, ano, idade, idade2012;
	
	printf("Insira o ano do seu nascimento: ");
	scanf("%d", &nascimento);
	printf("Insira o ano atual: ");
	scanf("%d", &ano);
	idade = ano - nascimento;
	idade2012 = 2012 - nascimento;
	printf("Sua idade: %d \n", idade);
	printf("Quantos anos teria em 2012: %d", idade2012);
	return 0;
	
}
