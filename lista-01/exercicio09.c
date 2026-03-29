// EXERCÍCIO 09

#include <stdio.h>
#include <string.h>

int main(){
	float price;
	int aCode;
	char region[20];
	
	printf("---------------------------\n");
	printf("Price: ");
	scanf("%f",&price);
	printf("Area Code: ");
	scanf("%d",&aCode);
	printf("---------------------------\n");
	
	if(aCode==1){
		strcpy(region,"South");
	} else if (aCode == 2){
		strcpy(region,"North");
	} else if (aCode == 3) {
		strcpy(region,"East");
	} else if (aCode == 4) {
		strcpy(region,"West");
	} else if (aCode == 5 || aCode ==6){
		strcpy(region,"Northeast");
	} else if (aCode == 7 || aCode == 8 || aCode == 9){
		strcpy(region,"Southeast");
	} else if (aCode>=10 && aCode <=20){
		strcpy(region,"Midwest");
	} else if (aCode >20 && aCode<31){
		strcpy(region,"Northeast");
	} else {
		printf("Invalid Area Code! Try Again.");
		return 0;
	}
	
	printf("Origin: %s", region);
	return 0;
}
