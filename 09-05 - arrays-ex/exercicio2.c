#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int i;
	char v1[3], v2[3];
	char vr[6];
	
	for (i = 0; i < 3; i++){
		printf("Digite o caractere[%d] do primeiro vetor: ", i);
		scanf("%c", &v1[i]);
		fflush(stdin);
	}
	for (i = 0; i < 3; i++){
		printf("Digite o caractere[%d] do segundo vetor: ", i);
		scanf("%c", &v2[i]);
		fflush(stdin);
	}
	for (i = 0; i < 3; i++){
		vr[i] = v1[i];
		vr[i+3] = v2[i];
	}
	printf("Junção dos dois vetores: \n");
	for (i = 0; i < 6; i++){
	printf("Caractere[%d]: %c \n", i, vr[i]);
	}	
	return 0;
}

