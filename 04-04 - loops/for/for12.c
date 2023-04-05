#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
	
	int i, aprovado, reprovado, exame;
	float nota1, nota2, media;
	aprovado = 0;
	reprovado = 0;
	exame = 0;
	
	for (i = 1; i <= 60; i++){
		printf("Digite sua primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite sua segunda nota: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2) / 2;
		printf("Média do aluno (%d): %.2f \n", i, media);
		if (media >= 5 && media <= 10){
			aprovado += 1;
		}
		else {
			if (media < 3){
				reprovado += 1;
			}
			else {
				exame += 1;
			}
		}
	}
	printf("Alunos aprovados: %d \nAlunos reprovados: %d \nAlunos de exame: %d", aprovado, reprovado, exame);
	return 0;
}

