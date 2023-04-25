#include <stdio.h>
#include <locale.h>
#include <string.h>

struct aluno{
	
	char turma[50];
	char nome[50];
	float media;
	
};

int main(){
setlocale(LC_ALL, "Portuguese");

	struct aluno a;
	int i;
	
	for(i = 1; i <= 2; i++){
		printf("Digite sua turma[%d]: ", i);
		gets(a.turma);
		printf("Digite seu nome[%d]: ", i);
		gets(a.nome);
		printf("Digite sua média[%d]: ", i);
		scanf("%f", &a.media);
		fflush(stdin);
		printf("Nome[%d]: %s \nTurma[%d]: %s \nMédia[%d]: %.2f\n", i, a.nome, i, a.turma, i, a.media);
	}
	return 0;
}

