#include <stdio.h>
#include <locale.h>

int soma(int a, int b){
	return a + b;

}

int main(){
setlocale(LC_ALL, "Portuguese");

	int s;
	s = soma(2, 3);	
	printf("soma = %d", s);
	return 0;
}

