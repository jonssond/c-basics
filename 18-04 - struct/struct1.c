#include <stdio.h>
#include <locale.h>
#include <string.h>

struct veiculos{
	
	char proprietario[50];
	char modelo[50];
	char chassi[17];
	char cor[20];
	char placa[7];
	char combustivel[10];
	char ano[4];	
};

int main(){
setlocale(LC_ALL, "Portuguese");

	struct veiculos p;
	printf("Digite o nome do proprietário: ");
	gets(p.proprietario);
	printf("Digite o modelo do carro: ");
	gets(p.modelo);
	printf("Digite o número do chassi: ");
	gets(p.chassi);
	printf("Digite a placa do carro: ");
	gets(p.placa);
	printf("Digite a cor do carro: ");
	gets(p.cor);
	printf("Combustível do carro: ");
	gets(p.combustivel);
	fflush(stdin);
	printf("Digite o ano do carro: ");
	gets(p.ano);
	
	printf("\nNome do proprietário: %s \nModelo do carro: %s \nChassi: %s \nPlaca: %s \nCor: %s \nAno do carro: %s \nCombustível do carro: %s", p.proprietario, p.modelo, p.chassi, p.placa, p.cor, p.ano, p.combustivel);
	
	
}


