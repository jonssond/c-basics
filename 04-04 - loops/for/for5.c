#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	
	for (i = 2; i <= 20; i = i + 2){
		printf("%d \n", i);
	}
	return 0;
}
