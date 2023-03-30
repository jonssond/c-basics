#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	char nome[50], cpf[11];
	float renda, desconto, rendaliquida, imposto;
	int depen;
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu CPF: ");
	gets(cpf);
	printf("Digite sua renda anual: ");
	scanf("%f", &renda);
	printf("Digite o número de dependentes: ");
	scanf("%d", &depen);
	desconto = depen * 110.0;
	rendaliquida = renda - desconto;
	if (rendaliquida <= 800){
		printf("Nome: %s \n CPF: %s \n Renda anual: %.2f \n Número de dependentes: %d \n Renda líquida: R$%.2f \n O contribuinte está isento de imposto.", nome, cpf, renda, depen, rendaliquida);	
	}
	else {
		if (rendaliquida >= 801 && rendaliquida <= 4000){
			imposto = rendaliquida * 2.5 / 100;
			printf("Nome: %s \n CPF: %s \n Renda anual: %.2f \n Número de dependentes: %d \n Renda líquida: R$%.2f \n Imposto a ser pago (2.5): R$%.2f.", nome, cpf, renda, depen, rendaliquida, imposto);
		}
		else {
			if (rendaliquida >= 4001 && rendaliquida <= 9000){
				imposto = rendaliquida * 5 / 100;
				printf("Nome: %s \n CPF: %s \n Renda anual: %.2f \n Número de dependentes: %d \n Renda líquida: R$%.2f \n Imposto a ser pago (5): R$%.2f.", nome, cpf, renda, depen, rendaliquida, imposto);
			}
			else {
				if (rendaliquida > 9000){
					imposto = rendaliquida * 10 / 100;
					printf("Nome: %s \n CPF: %s \n Renda anual: %.2f \n Número de dependentes: %d \n Renda líquida: R$%.2f \n Imposto a ser pago (10): R$%.2f.", nome, cpf, renda, depen, rendaliquida, imposto);
				}
				else {
					printf("Algo deu errado.");
				}
			}
		}
	}
	return 0;
}

