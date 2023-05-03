#include <stdio.h>
#include <locale.h>

void mensagem(){
	printf("heaven's door");
}

int main(){
setlocale(LC_ALL, "Portuguese");

	mensagem();
	return 0;
}

