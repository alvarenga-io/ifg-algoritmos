//EXERCÍCIO 03 - VERIFICAÇÃO DE SENHA

#include <stdio.h>
#include <string.h>

int main(){
    char attempt[20];
    char correctPassword[] = "ASDFG" ;

   printf("Digite sua senha: ");
   scanf("%s",attempt);

   if (strcmp(attempt,correctPassword) == 0){
    printf("Acesso permitido!\n");
   }else{
    printf("Senha incorreta.\n");
   }

   return 0;
}
