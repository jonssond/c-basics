#include <stdio.h>

int main(){
	
	float salario, novosalario, taxa, aumento;
	
	printf("Insira o seu salario: ");
	scanf("%f", &salario);
	printf("Insira a porcentagem de aumento: ");
	scanf("%f", &taxa);
	aumento = salario * taxa / 100;
	novosalario = salario + aumento;
	printf("Valor do seu novo salario: %.2f", novosalario);
	return 0;
}
