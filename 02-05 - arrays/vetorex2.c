#include <stdio.h>
#include <locale.h>

void cadastro(int x[5]){
	int i;
	printf("Cadastro os números: \n");
	for (i = 0; i < 5; i++){
		printf("Digite o número[%d]: ", i);
		scanf("%d", &x[i]);
	}
}

void quadrado(int x[5], int y[5]){
	int i;
	for (i = 0; i < 5; i++){
		y[i] = x[i] * x[i];
	}
}

void exibe(int x[5]){
	int i;
	printf("Exibindo o quadrado dos números: \n");
	for (i = 0; i < 5; i++){
		printf("Número[%d]: %d \n", i, x[i]);
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int a[5], b[5], i;
	
	cadastro(a);
	quadrado(a, b);
	exibe(b);	
	return 0;
}
