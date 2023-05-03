#include <stdio.h>
#include <locale.h>

void cadastro(char x[5][100]){
	int i;
	printf("Cadastrando as cidades no vetor: \n");
	for(i = 0; i < 5; i++){
		printf("Digite a cidade[%d]: ", i);
		gets(x[i]);
	}
}

void exibe(char x[5][100]){
	int i;
	printf("Exibindo os valores do vetor: \n");
	for(i = 0; i < 5; i++){
		printf("Cidade[%d]: = %s\n", i, x[i]);
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	char vetor[5][100];
	
	cadastro(vetor);
	printf("\n");
	exibe(vetor);
	return 0;
}

