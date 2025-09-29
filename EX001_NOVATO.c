#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define MAX_NOME 50
#define MAX_COR 20

// Definição da struct
typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int tropas;
} Territorio;

int main() {
    Territorio mapa[MAX_TERRITORIOS];

    printf("=== Cadastro Inicial dos Territorios (Nível Novato) ===\n");

    // Cadastro dos territórios
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        // Nome
        printf("Digite o nome do território: ");
        fgets(mapa[i].nome, MAX_NOME, stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // remover \n

        // Cor do Exército
        printf("Digite a cor do exército: ");
        fgets(mapa[i].corExercito, MAX_COR, stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        // Número de Tropas
        printf("Digite o número de tropas: ");
        scanf("%d", &mapa[i].tropas);
        getchar(); // consumir o \n deixado pelo scanf
    }

    // Exibição do estado atual do mapa
    printf("\n=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);
        printf("  Nome        : %s\n", mapa[i].nome);
        printf("  Cor Exército: %s\n", mapa[i].corExercito);
        printf("  Tropas      : %d\n", mapa[i].tropas);
        printf("---------------------------\n");
    }

    return 0;
}
