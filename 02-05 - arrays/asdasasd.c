#include <stdio.h>
#include <locale.h>

void cadastro(int y, int x[]){
	int i;
	for (i = 0; i < y; i++){
		printf("Digite o número[%d]: ", i);
		scanf("%d", &x[i]);
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Digite o número de valores a serem cadastros: ");
	scanf("%d", &n);
	int vetor[n];
	cadastro(n, vetor);	
	
	return 0;
}

