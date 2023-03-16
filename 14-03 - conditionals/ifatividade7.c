#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	if (numero % 3 == 0) {
		printf("Seu número é múltiplo de 3.");
	}
	else {
		printf("Seu número não é múltiplo de 3.");
	}
	return 0;
}
