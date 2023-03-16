#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int a, b;
	
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	if (a < b) {
		printf("%d %d", a, b);
	}
	else {
		printf("%d %d", b, a);
	}
	return 0;
}

