#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	
	for (i = 500; i >= 1; i--){
		printf("%d \n", i);
	}
	return 0;
}
