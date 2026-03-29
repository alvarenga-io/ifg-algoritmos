//EXERCÍCIO 20

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, discriminant;
    float x1, x2;

    printf("QUADRATIC EQUATIONS\n");
    printf("------------------------\n");
    printf("Type the values of the equation: \n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d", &c);
    printf("------------------------\n");
    printf("Solving the equations: %dx²+ %dx+ %d = 0 \n",a,b,c);

    discriminant = pow(b) + 4*a*c;


    return 0;



    
}