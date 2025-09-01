#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

/*----------------------- Desafio Xadrez - Nível Novato -----------------------
Objetivo: Cadastro e Comparação de Cartas*/


int main() {
    // --- 1. Entrada de Dados com Constantes ---
    // Declara constantes para definir a quantidade de casas que cada peca se move.
    // Usar 'const' e uma boa pratica para valores que nao mudam, tornando o codigo mais facil de ler.
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // --- 2. Movimentação da Torre: 5 casas para a direita (usando 'for') ---
    // O loop 'for' é ideal para quando sabemos exatamente quantas vezes o código deve se repetir.
    // Ele inicializa um contador (i=0), define a condição de repetição (i < MOVIMENTOS_TORRE)
    // e atualiza o contador a cada repetição (i++).
    printf("--- Movimentação da Torre ---\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // A linha em branco abaixo ajuda a organizar a saída no terminal.
    printf("\n");

    // --- 3. Movimentação da Rainha: 8 casas para a esquerda (usando 'while') ---
    // O loop 'while' é usado para repetir um bloco de código enquanto uma condição for verdadeira.
    // O controle do contador (counter) e feito manualmente dentro do loop.
    printf("--- Movimentação da Rainha ---\n");
    int contador_rainha = 0; // Inicia um contador em 0.
    while (contador_rainha < MOVIMENTOS_RAINHA) {
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador a cada repetição.
    }

    // A linha em branco abaixo ajuda a organizar a saída no terminal.
    printf("\n");

    // --- 4. Movimentação do Bispo: 5 casas na diagonal superior direita (usando 'do-while') ---
    // O loop 'do-while' garante que o bloco de código seja executado pelo menos uma vez,
    // antes de checar a condição de repetição. É uma boa opção para demonstrar as estruturas.
    printf("--- Movimentação do Bispo ---\n");
    int contador_bispo = 0; // Inicia um contador em 0.
    if (MOVIMENTOS_BISPO > 0) { // Garante que o loop so comece se houver movimentos.
        do {
            // O Bispo se move na diagonal. O requisito pedia para usar uma combinação
            // de direções básicas para isso.
            printf("Cima\n");
            printf("Direita\n");
            contador_bispo++; // Incrementa o contador.
        } while (contador_bispo < MOVIMENTOS_BISPO);
    }
    
    return 0;
}
