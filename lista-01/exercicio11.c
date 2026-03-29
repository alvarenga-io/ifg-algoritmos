// EXERCÍCIO 11

#include <stdio.h>

int main(){
	int a,b,greater;
	
	printf("Insert the first number: ");
	scanf("%d", &a);
	printf("Insert the second number: ");
	scanf("%d", &b);
	
	greater = b;
	if (b>a){
		greater = b;
	}else {
		greater = a;
	}
	printf("The greatest number among %d and %d is %d",a,b,greater);
	
	return 0;
}
