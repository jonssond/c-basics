#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int v1[100];
	float aux;
	int i, j;
	
	for (i = 0; i < 100; i++){
		printf("Digite o valor[%d]: ", i);
		scanf("%d", &v1[i]);
	}
	for (i = 0; i < 99; i++){
		for (j = i + 1; j < 100; j++){
			if (v1[i] > v1[j]){
				aux = v1[i];
				v1[i] = v1[j];
				v1[j] = aux;
			}
		}
	}
	printf("Vetor em ordem crescente: \n");
	for (i = 0; i < 100; i++){
		printf("Valor[%d]: %d \n", i, v1[i]);
	}
	return 0;
}
