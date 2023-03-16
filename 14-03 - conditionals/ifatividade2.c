#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int num20;
	
	printf("Insira um número: ");
	scanf("%d", &num20);
	if (num20 >= 20) {
		printf("Esse número é maior ou igual a 20 (vinte).");
	}
	else {
		printf("Esse número é menor que 20 (vinte).");
	}
	return 0;
}
