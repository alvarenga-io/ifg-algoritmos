//EXERCICIO 15

#include <stdio.h>
#include <math.h>

void addNumbers();
void findSquare();

int main(){
	int option;

	do {
		printf("---------------\n");
		printf("MENU\n");
		printf("1 - Sum\n");
		printf("2 - Square\n");
		printf("3 - Exit\n");
		printf("---------------\n");
		printf("Choose an operation: ");
		scanf("%d",&option);

		switch (option)
		{
		case 1:
			addNumbers();
			break;
		case 2:
			findSquare();
			break;
		case 3:
			printf("Encerrando o programa...\n");
			break;
		default:
			printf("Opção Inválida!\n");
			break;
		}
	} while(option != 3);
	
	return 0;
}

void addNumbers(){
	int a, b;
	printf("Type two number separated by space: ");
	scanf("%d %d", &a,&b);
	printf("The result of the sum is: %d \n",a+b);
}

void findSquare() {
	float a;
	printf("Type a number: ");
	scanf("%f", &a);
	printf("The square root is: %.2f\n", sqrt(a));
}