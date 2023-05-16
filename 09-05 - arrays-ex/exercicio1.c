#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int i, n;
	
	printf("Digite o número de elementos dentro dos vetores: ");
	scanf("%d", &n);
	while (n < 1 || n > 100) {
		printf("Valor inválido! \n");
		break;
	} 
 	int v1[n], v2[n], v3[n];
	for (i = 0; i < n; i++){
		printf("Digite o valor[%d] do primeiro vetor: ", i);
		scanf("%d", &v1[i]);
	}
	for (i = 0; i < n; i++){
		printf("Digite o valor[%d] do segundo vetor: ", i);
		scanf("%d", &v2[i]);
	}
	for (i = 0; i < n; i++){
		v3[i] = 2 * v1[i] - 3 * v2[i];
	}
	for (i = 0; i < n; i++){
		printf("Resultado do terceiro vetor, valor[%d]: %d\n", i, v3[i]);
	}
	return 0;
}
