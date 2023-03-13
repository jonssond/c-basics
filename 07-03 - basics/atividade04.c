#include <stdio.h>

int main(){
	
	float area, raio;
	
	printf("Insira o raio de um circulo: ");
	scanf("%f", &raio);
	area = 3.14 * (raio * raio);
	printf("Resultado da area do circulo: %.2f", area);
	return 0;
}
