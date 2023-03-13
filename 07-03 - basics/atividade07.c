#include <stdio.h>

int main(){
	
	int a, b, c, r, s, d;
	
	printf("Calcule D = R + S / 2, sendo R o quadrado da soma de A + B e S o quadrado da soma de B + C. \n");
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	printf("Insira o valor de C: ");
	scanf("%d", &c);
	r = (a + b) * (a + b);
	s = (b + c) * (b + c);
	d = (r + s) / 2;
	printf("Valor final: %d", d);
	return 0;
	
}
