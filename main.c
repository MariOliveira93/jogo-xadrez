
#include <stdio.h>

// Protótipos das funções recursivas
void movimentar_torre_recursivo(int casas_restantes);
void movimentar_bispo_recursivo(int casas_restantes);
void movimentar_rainha_recursivo(int casas_restantes);

/**
 * Função recursiva para simular o movimento da Torre
 * A Torre move-se 5 casas para a direita
 * @param casas_restantes: número de casas ainda a serem percorridas
 */
void movimentar_torre_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas a percorrer, finaliza a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento
    printf("Direita\n");
    
    // Chamada recursiva com uma casa a menos
    movimentar_torre_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para simular o movimento do Bispo
 * O Bispo move-se 5 casas na diagonal (cima e direita)
 * @param casas_restantes: número de casas ainda a serem percorridas
 */
void movimentar_bispo_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas a percorrer, finaliza a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento diagonal
    printf("Cima Direita\n");
    
    // Chamada recursiva com uma casa a menos
    movimentar_bispo_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para simular o movimento da Rainha
 * A Rainha move-se 8 casas para a esquerda
 * @param casas_restantes: número de casas ainda a serem percorridas
 */
void movimentar_rainha_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas a percorrer, finaliza a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento
    printf("Esquerda\n");
    
    // Chamada recursiva com uma casa a menos
    movimentar_rainha_recursivo(casas_restantes - 1);
}

/**
 * Função para simular o movimento do Bispo com loops aninhados
 * Loop externo controla movimento vertical, loop interno controla horizontal
 */
void movimentar_bispo_loops_aninhados() {
    printf("Movimento do Bispo (com loops aninhados):\n");
    
    int casas_bispo = 5; // Número de casas a serem percorridas
    
    // Loop externo: controla o movimento vertical (cima)
    for (int vertical = 0; vertical < casas_bispo; vertical++) {
        // Para cada movimento vertical, há um movimento horizontal correspondente
        // Loop interno: controla o movimento horizontal (direita)
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");
}

/**
 * Função para simular o movimento do Cavalo com loops complexos
 * O Cavalo move-se em "L": duas casas para cima e uma para a direita
 */
void movimentar_cavalo_complexo() {
    printf("Movimento do Cavalo (loops complexos):\n");
    
    int movimento_vertical = 2;    // Duas casas para cima
    int movimento_horizontal = 1;  // Uma casa para a direita
    int i = 0, j = 0;             // Variáveis de controle dos loops
    
    // Loop externo (for): controla o movimento total do cavalo
    for (int movimento = 0; movimento < 1; movimento++) {
        
        // Primeiro loop aninhado (while): movimento vertical (cima)
        i = 0;
        while (i < movimento_vertical) {
            printf("Cima\n");
            i++;
            
            // Verifica se completou o movimento vertical
            if (i >= movimento_vertical) {
                break; // Sai do loop quando completa o movimento vertical
            }
        }
        
        // Segundo loop aninhado (do-while): movimento horizontal (direita)
        j = 0;
        do {
            printf("Direita\n");
            j++;
            
            // Condição para continuar ou parar
            if (j >= movimento_horizontal) {
                break; // Sai do loop quando completa o movimento horizontal
            }
            
            continue; // Continua para a próxima iteração (embora seja redundante aqui)
            
        } while (j < movimento_horizontal);
    }
    printf("\n");
}

/**
 * Função principal do programa
 * Executa todos os movimentos das peças de xadrez
 */
int main() {
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    
    printf("=== SIMULACAO DE MOVIMENTOS DE PECAS DE XADREZ ===\n\n");
    
    // 1. Movimento da Torre (recursivo)
    printf("Movimento da Torre (recursivo - 5 casas para a direita):\n");
    movimentar_torre_recursivo(casas_torre);
    printf("\n");
    
    // 2. Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo - 5 casas na diagonal):\n");
    movimentar_bispo_recursivo(casas_bispo);
    printf("\n");
    
    // 3. Movimento do Bispo com loops aninhados
    movimentar_bispo_loops_aninhados();
    
    // 4. Movimento da Rainha (recursivo)
    printf("Movimento da Rainha (recursivo - 8 casas para a esquerda):\n");
    movimentar_rainha_recursivo(casas_rainha);
    printf("\n");
    
    // 5. Movimento do Cavalo (loops complexos)
    movimentar_cavalo_complexo();
    
    printf("=== FIM DA SIMULACAO ===\n");
    
    return 0;
}