#include <stdio.h>
#include <locale.h>

int maior(int a, int b){
	if (a > b){
		return a;
	}
	else {
		return b;
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");

	int x, y, m;
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf("%d", &y);
	m = maior(x, y);
	
	printf("O maior número entre %d e %d é: %d. \n", x, y, m);
	return 0;
}

