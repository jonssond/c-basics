#include <stdio.h>
#include <locale.h>
#include <string.h>

void cadastro(int x, char y[][100], int z[]){
	int i;
	for (i = 0; i < x; i++){
		fflush(stdin);
		printf("Digite o nome da pessoa[%d]: ", i);
		gets(y[i]);
		printf("Digite a idade da pessoa[%d]: ", i);
		scanf("%d", &z[i]);
	}
}

void pesquisa(int x, char y[][100], int z[]){
	int i, name[100], pos;
	fflush(stdin);
	printf("Digite o nome da pessoa a ser pesquisada: ");
	gets(name);
	for (i = 0; i < x; i++){
		if (strcmp(y[i], name) == 0){
			pos = i;
		}
	}
	printf("A idade da pessoa pesquiada é: %d", z[pos]);
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int n, s;
	printf("Digite o número de pessoas a serem cadastradas: ");
	scanf("%d", &n);
	char nome[n][100];
	int idade[n];
	
	cadastro(n, nome, idade);
	pesquisa(n, nome, idade);
	return 0;
}
