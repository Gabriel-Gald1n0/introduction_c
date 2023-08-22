#include <stdio.h>
#include <string.h> 
#include <math.h>

int main(){
    int a;
    int b;

    printf("Digite o 1 valor: ");
    scanf("%i",&a); // usa-se o & para passar o endereco das variaveis para o scanf 

    printf("Digite o 2 valor: ");
    scanf("%i",&b);
    /*
    outras maneiras de declarar
    int a;
    a = 2;
    int a = 2;
    int a, b,c;
    */

    int soma =  a + b;
    float subtracao = a - b; 
    float divisao = (float)a/b;
    int multiplicacao = a*b;

    printf("soma = %i + %i = %i\n", a , b, soma);
    printf("subtracao = %i - %i = %.2f\n", b , a, subtracao);
    printf("divisao = %i / %i = %.2f \n", a , b, divisao);
    printf("multiplicacao = %i * %i = %i\n", b , a, multiplicacao);
    return 0;
}

// pra copilar pd escrever "gcc -o variaveis.c" ou F6