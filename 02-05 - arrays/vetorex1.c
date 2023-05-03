#include <stdio.h>
#include <locale.h>

void cadastro(int a, float c[]){
	int i, cont = 0;
	for(i = 0; i < a; i++){
		printf("Digite a média do aluno[%d]: ", i);
		scanf("%f", &c[i]);
	}	
}

int mediaMenor(int a, float b[]){
	int i, cont = 0;
	for(i = 0; i < a; i++){
		if (b[i] < 5){
			cont++;
		}
	}
	return cont;
}
int main(){
setlocale(LC_ALL, "Portuguese");
	
	int n, s;
	printf("Digite o número de alunos que você deseja cadastrar a média: ");
	scanf("%d", &n);
	float media[n];
	
	cadastro(n, media);
	s = mediaMenor(n, media);
	printf("\n");
	printf("O número de alunos com média abaixo de 5.0 é de: %d", s);
	return 0;
}

