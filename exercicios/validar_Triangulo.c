#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {

    int valor1, valor2, valor3;
    printf("Programa feito para validar existencia do triangulo\n");
    printf("Digite os tamanhos desse triangulo:\n");

    printf("Lado 1: ");
    scanf("%i",&valor1);
    printf("Lado 2: ");
    scanf("%i",&valor2);
    printf("Lado 3: ");
    scanf("%i",&valor3);

    int lado_maior;
    int lado_normal;
    int lado_menor;
    // condição ? valor_se_verdadeiro : valor_se_falso;

    if(valor1 > valor2)
    {
        if(valor1 > valor3)
        {
            lado_maior = valor1;
            lado_normal = valor2 > valor3 ? valor2 : valor3;
            lado_menor = valor2 < valor3 ? valor2 : valor3;
        }
        else {
            lado_maior = valor3;
            lado_normal = valor1;
            lado_menor = valor2;
        }
    }else {
        if(valor2 > valor3)
        {
            lado_maior = valor2;
            lado_normal = valor1 > valor3 ? valor1 : valor3;
            lado_menor = valor1 < valor3 ? valor1 : valor3;
        }
        else {
            lado_maior = valor3;
            lado_normal = valor2;
            lado_menor = valor1;
        }
    }

    int soma_triangulo = lado_menor + lado_normal;

    if ( soma_triangulo > lado_maior)
    {
        printf("O triangulo existe");
    } else{
        printf("O triangulo nao existe");
    }

    //printf("\nmenor = %i \nnormal = %i \nmaior = %i \n", lado_menor,lado_normal, lado_maior);
    return 0;
}