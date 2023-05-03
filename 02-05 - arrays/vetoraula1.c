#include <stdio.h>
#include <locale.h>

void cadastro(int y, int x[]){
	int i;
	printf("Cadastrando os dados no vetor: \n");
	for(i = 0; i < y; i++){
		printf("Digite o número[%d]: ", i);
		scanf("%d", &x[i]);
	}
}

void exibe(int y, int x[]){
	int i;
	printf("Exibindo os valores do vetor: \n");
	for(i = 0; i < y; i++){
		printf("Vetor[%d]: = %d\n", i, x[i]);
	}
}

int pares(int y, int x[]){
	int i, par = 0;
	for(i = 0; i < y; i++){
		if (x[i] % 2 == 0){
			par++;
		}
	}
	return par;
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int n, s;
	printf("Digite quantos valores você deseja guardar no vetor: ");
	scanf("%d", &n);
	int vetor[n];
	
	cadastro(n, vetor);
	printf("\n");
	s = pares(n, vetor);
	exibe(n, vetor);
	printf("Quantidade de números pares: %d", s);
	return 0;
}

