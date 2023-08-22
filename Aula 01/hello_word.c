#include <stdio.h>
#include <string.h> 

int main() {
    char nome[100];

    printf("Digite seu nome: ");
    scanf("%s", nome); // Use "%s" para ler uma string

    printf("Hello Word and Hi %s!\n", nome); 

    return 0;
}