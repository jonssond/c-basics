#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int a, b, soma;
	
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	soma = a + b;
	if (soma > 10) {
		printf("Seu número é: %d", soma);
	}
	return 0;
}
