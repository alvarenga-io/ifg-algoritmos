// EXERCÍCIO 10

#include <stdio.h>


int main() {
	int number, remainder;
	
	printf("Insert a number: ");
	scanf("%d", &number);
	remainder = number%2;
	
	if(remainder==0){
		printf("The number %d is odd", number);
	} else {
		printf("The number %d is even", number);
	}
	
	return 0;

}
