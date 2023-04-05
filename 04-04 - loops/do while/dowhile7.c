#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	float nota1, nota2, media;
	i = 1;
	
	do {
		printf("Digite sua primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite sua segunda nota: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2) / 2;
		printf("Sua média: %.2f \n", media);
		i++;
	} while (i <= 2);
	return 0;
}
