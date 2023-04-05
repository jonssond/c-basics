#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	float media, alturageral, altura;
	i = 1;
	alturageral = 0;
	
	while (i <= 5){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		alturageral += altura;
		i++;
	}
	media = alturageral / 5;
	printf("Média das alturas: %.2f\n", media);
	return 0;
}
