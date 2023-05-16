#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int i, cont1, cont2;
	int v1[10], v2[10], v3[20];
	
	for (i = 0; i < 10; i++){
		printf("Digite o valor[%d] do primeiro vetor: ", i);
		scanf("%d", &v1[i]);
	}
	for (i = 0; i < 10; i++){
		printf("Digite o valor[%d] do segundo vetor: ", i);
		scanf("%d", &v2[i]);
	}
	cont1 = 0;
	cont2 = 0;
	for (i = 0; i < 20; i++){
		if (i % 2 == 0){
			v3[i] = v2[cont2];
			cont2 += 1;
		}
		else {
			v3[i] = v1[cont1];
			cont1 += 1;
		}
	}
	printf("Resultados do vetor: \n");
	for (i = 0; i < 20; i++){
		printf("Resultado[%d]: %d \n", i, v3[i]);
	}
	return 0;
}
