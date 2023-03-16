#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int a, b, aux;
	
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	if (a > b) {
		aux = a;
		a = b;
		b = aux;
		printf("%d %d", a, b);
	}
	return 0;
}

