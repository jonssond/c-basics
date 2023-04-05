#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
	
	int i;
	float nota1, nota2, media, mediatotal;
	
	for (i = 1; i <= 10; i++){
		printf("Digite sua primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite sua segunda nota: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2) / 2;
		mediatotal += media;
		printf("Média do aluno (%d): %.2f \n", i, media);
	}
	mediatotal = mediatotal / 10;
	printf("A média total dos alunos foi: %.2f", mediatotal);
	return 0;
}

