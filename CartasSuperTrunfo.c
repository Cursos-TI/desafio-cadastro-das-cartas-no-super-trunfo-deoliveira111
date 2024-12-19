#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para armazenar as propriedades de uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    printf("Bem-vindo ao cadastro do Super Trunfo - Países!\n");

    // Cadastro das cidades
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\nCadastro da cidade %c%02d:\n", estados[i], j + 1);

            // Definir o código da cidade
            snprintf(cidades[i][j].codigo, sizeof(cidades[i][j].codigo), "%c%02d", estados[i], j + 1);

            // Entrada de dados
            printf("População: ");
            scanf("%d", &cidades[i][j].populacao);

            printf("Área (em km2): ");
            scanf("%f", &cidades[i][j].area);

            printf("PIB (em milhões): ");
            scanf("%f", &cidades[i][j].pib);

            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[i][j].pontos_turisticos);
        }
    }

    // Exibição dos dados cadastrados
    printf("\n--- Dados das Cidades Cadastradas ---\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\nCidade: %s\n", cidades[i][j].codigo);
            printf("População: %d\n", cidades[i][j].populacao);
            printf("Área: %.2f km2\n", cidades[i][j].area);
            printf("PIB: %.2f milhões\n", cidades[i][j].pib);
            printf("Pontos Turísticos: %d\n", cidades[i][j].pontos_turisticos);
        }
    }

    return 0;
}