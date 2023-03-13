#include <stdio.h>

int main(){
	
	float salariominimo, horastrabalhadas, valorhora;
	float imposto, salariobruto, salarioliquido;
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salariominimo);
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%f", &horastrabalhadas);
	valorhora = salariominimo / 2;
	salariobruto = horastrabalhadas * valorhora;
	printf("Valor do salario bruto: %.2f \n", salariobruto);
	imposto = salariobruto * 0.03;
	salarioliquido = salariobruto - imposto;
	printf("Valor do salario liquido: %.2f", salarioliquido);
	return 0;
	
}
