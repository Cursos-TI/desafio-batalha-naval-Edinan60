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

    // Alterando o valor do tabuleiro na "diagonal específica"
    // Linha 7, Coluna 4
    tabuleiro[6][3] = 3;  // Como o índice começa em 0, linha 7 é i=6 e coluna 4 é j=3
    // Linha 8, Coluna 5
    tabuleiro[7][4] = 3;  // Linha 8 é i=7 e coluna 5 é j=4
    // Linha 9, Coluna 6
    tabuleiro[8][5] = 3;  // Linha 9 é i=8 e coluna 6 é j=5

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