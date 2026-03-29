// EXERCÍCIO 05

#include <stdio.h>
int main (){
	float salario ;
	
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salario);
	
	if (salario<300) {
		salario = salario*1.5;
	} else {
		salario = salario*1.3;
	}
	printf("Novo salário: %.2f", salario);
	
	return 0;
}
