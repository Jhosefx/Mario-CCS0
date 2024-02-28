#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int altura;

    // Pedir ao usuário o tamanho da altura
    do {
        printf("Por favor, insira o tamanho da altura (de 1 a 8): ");
        scanf("%d", &altura);
        // Verificar se o tamanho da altura é válido
        if (altura < 1 || altura > 8) {
            printf("Tamanho inválido. Por favor, insira um valor entre 1 e 8.\n");
        }
    } while (altura < 1 || altura > 8);

    // Iterar de 1 até a altura
    for (int i = 1; i <= altura; i++) {
        // Imprimir os #
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        // Quebra de linha após imprimir os #
        printf("\n");
    }

    return 0;
}
