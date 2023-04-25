#include <stdio.h>
#include <locale.h>
#include <string.h>

struct pessoa{
	
	char nome[50], sexo[10];
	int idade;
	float altura;
	
};

int main(){
	
	struct pessoa p;
	
	printf("Digite seu nome: ");
	gets(p.nome);
	printf("Digite seu sexo: ");
	gets(p.sexo);
	printf("Digite sua idade: ");
	scanf("%d", &p.idade);
	printf("Digite sua altura: ");
	scanf("%f", &p.altura);
	printf("Nome: %s \nSexo: %s \nIdade: %d \nAltura: %.2f", p.nome, p.sexo, p.idade, p.altura);
	return 0;
}

