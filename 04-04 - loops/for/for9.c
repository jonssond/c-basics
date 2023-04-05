#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	float alturageral, media, altura;
	alturageral = 0;
	
	for (i = 1; i <= 5; i++){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		alturageral += altura;
	}
	media = alturageral / 5;
	printf("Média das alturas: %.2f\n", media);
	return 0;
}
