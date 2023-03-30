#include <stdio.h>

int main(){
	
	float media;
	
	printf("Digite a sua media: ");
	scanf("%f", &media);
	if (media > 5){
		printf("Voce esta aprovado.");
	}
	else {
		if (media >= 3 && media <= 5){
			printf("Exame.");
		}
		else {
			printf("Reprovado.");
		}
	}
	return 0;
}
