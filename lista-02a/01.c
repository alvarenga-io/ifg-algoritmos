// EXERCÍCIO 01"

#include <stdio.h>
#include <math.h>

int main() {
	int n, aux;
	aux = 1;
	n = 9;
	
	while(aux<=n){
		if(aux<9){
			 printf("%d-",aux);
		} else
			printf("%d\n",aux);
		aux = aux +1;
	}
	return 0;
}



