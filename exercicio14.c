// EXERCICIO 14

#include <stdio.h>
#include <string.h>

int main(){
	int code,percent;
	char bureau[20];
	
	printf("---------------------------\n");
	printf("1 - Clerk\n");
	printf("2 - Secretary\n");
	printf("3 - Cashier\n");
	printf("4 - Manager\n");
	printf("5 - Head\n");
	printf("---------------------------\n");
	printf("Insert you job's code: ");
	scanf("%d",&code);
	
	switch(code){
	case 1:
		strcpy(bureau,"Clerk");
	 	percent=50;
	 	break;
	case 2:
		strcpy(bureau,"Secretary");
		percent=35;
		break;
	case 3:
		strcpy(bureau,"Cashier");
		percent=20;
		break;
	case 4:
		strcpy(bureau,"Manager");
		percent=10;
		break;
	case 5:
		strcpy(bureau,"Head");
		percent=0;
		break;
	default:
		break;
	}
	printf("You have got a %d%% salary raise",percent);
	
	return 0;
	
}
