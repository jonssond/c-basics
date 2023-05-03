#include <stdio.h>
#include <locale.h>

void soma(int a, int b){
	int s = a + b;
	printf("%d", s);
}

int main(){
setlocale(LC_ALL, "Portuguese");

	soma(2, 3);
	return 0;
}

