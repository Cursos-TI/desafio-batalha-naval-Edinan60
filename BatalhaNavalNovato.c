#include <stdio.h>

int main() {
    // Declarando o tabuleiro (Matriz 10x10)
    int tabuleiro[10][10] = {0}; // Inicializa todas as células com 0

    // Alterando o valor do tabuleiro horizontalmente
    int linha = 5; // Índice da linha
    tabuleiro[linha][5] = 3; // Define o valor na coluna 5
    tabuleiro[linha][6] = 3; // Define o valor na coluna 6
    tabuleiro[linha][7] = 3; // Define o valor na coluna 7

    // Alterando o valor do tabuleiro verticalmente
    int coluna_vertical = 1; // Índice da coluna para preencher verticalmente
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][coluna_vertical] = 3; // Preenche as linhas 1, 2 e 3 da coluna 1
    }

    // Letras para representar as linhas
    char letras_linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Imprimindo o cabeçalho das colunas
    printf("   "); // Espaço para alinhar com as letras das linhas
    for (int j = 0; j < 10; j++) {
        printf("%d ", j); // Números das colunas
    }
    printf("\n");

    // Preenchendo e imprimindo o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%c  ", letras_linha[i]); // Letra da linha atual
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Valor da célula
        }
        printf("\n");
    }

    return 0;
}