// EXERC�CIO 2
#include <stdio.h>

int main(){
	int opcao;
	
	void numerosImpares();
	void numerosPares();
	void divisiveisPor5();
	
	do {
		printf("\n---------------\n");
		printf("MENU\n");
		printf("1 - Numeros pares de 1 a 100\n");
		printf("2 - Numeros impares 1 a 100\n");
		printf("3 - Numeros divis�veis por 5 entre 1 a 100\n");
		printf("4 - Parar\n");
		printf("---------------\n");
		printf("Escolha uma opcao: ");
		scanf("%d",&opcao);
		
		switch(opcao){
  		case 1:
			numerosPares();
			break;
		case 2:
			numerosImpares();
			break;
		case 3:
			divisiveisPor5();
			break;
		case 4:
			break;
		default:
			printf("Opcao invalida!");
		}
		

	
	}while(opcao!=4);
}

void numerosPares(){
	printf("\n-----------------------------------------------------\n");
	printf("Numeros pares entre 1 e 100: \n");
	int n =2;
	 for(n; n<=100; n=n+2){
	 	printf("%d ", n);
	 }
}

void numerosImpares(){
	printf("\n-----------------------------------------------------\n");
	printf("Numeros impares entre 1 e 100: \n");
	int n;
	for(n=1; n<=100 ;n=n+2){
		printf("%d ", n);
	}
}

void divisiveisPor5(){
	int quantidade = 0;
	printf("\n-----------------------------------------------------\n");
	printf("Numeros divisiveis por 5 entre 1 e 100: \n");
	for(int i= 1; i<=100; i++){
		   if(i%5==0)	{
		   	printf("%d ", i);
		   	quantidade = quantidade + 1;
		   }
	}
	printf("\n-----------------------------------------------------\n");
	printf("\nQuantidade de numeros divisiveis: ");
	printf("%d", quantidade);
}
