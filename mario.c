#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int altura;

    // Pedir ao usu�rio o tamanho da altura
    do {
        printf("Por favor, insira o tamanho da altura (de 1 a 8): ");
        scanf("%d", &altura);
        // Verificar se o tamanho da altura � v�lido
        if (altura < 1 || altura > 8) {
            printf("Tamanho inv�lido. Por favor, insira um valor entre 1 e 8.\n");
        }
    } while (altura < 1 || altura > 8);

    // Iterar de 1 at� a altura
    for (int i = 1; i <= altura; i++) {
        // Imprimir os #
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        // Quebra de linha ap�s imprimir os #
        printf("\n");
    }

    return 0;
}
