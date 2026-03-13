#include <stdio.h>

int main(){
	float salario, ajuste, reajustado;
	
	ajuste = 1.3;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	
	if (salario<500) {
		salario = salario*ajuste;
		printf("Seu novo salario e: %.2f", salario);
	} else {
		printf("Não aplica");
	}
	
	
	
	
}
