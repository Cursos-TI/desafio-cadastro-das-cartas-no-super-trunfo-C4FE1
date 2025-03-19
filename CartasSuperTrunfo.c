#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Estrutura para representar uma carta de cidade
    struct card {
        char state;
        int attractions, code, population;
        float area, pib, density, pib_per_capita;
        char name[169];
    };

    // Declaração do array para armazenar as cartas
    struct card arr_cards[2];

    // Loop para entrada de dados das cidades
    for (int i = 0; i < 2; i++) {
        printf("\nDigite os dados da cidade %d:\n", i+1);
        printf("Digite o estado da cidade: ");
        scanf(" %c", &arr_cards[i].state);  // O espaço antes de %c é para limpar o buffer
        getchar(); // Limpeza do buffer de entrada
        
        printf("Digite o nome da cidade: ");
        fgets(arr_cards[i].name, 168, stdin);
        arr_cards[i].name[strcspn(arr_cards[i].name, "\n")] = 0;  // Remove a nova linha
        
        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &arr_cards[i].attractions);

        printf("Digite a população da cidade: ");
        scanf("%d", &arr_cards[i].population);

        printf("Digite a área da cidade: ");
        scanf("%f", &arr_cards[i].area);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &arr_cards[i].pib);

        printf("Digite o código da cidade: ");
        scanf("%d", &arr_cards[i].code);

        // Calculando densidade e PIB per capita
        arr_cards[i].density = arr_cards[i].population / arr_cards[i].area;
        arr_cards[i].pib_per_capita = arr_cards[i].pib / arr_cards[i].population;
    }

    int options1, options2;

    // Menu para escolha dos dois atributos
    printf("\nEscolha o primeiro atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &options1);

    // Menu para escolha do segundo atributo (não pode ser igual ao primeiro)
    printf("\nEscolha o segundo atributo para a comparação (não pode ser o mesmo do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    do {
        scanf("%d", &options2);
        if (options2 == options1) {
            printf("Por favor, escolha um atributo diferente do primeiro!\n");
        }
    } while (options2 == options1);

    // Função para comparar os atributos
    float get_attribute(struct card city, int option) {
        switch(option) {
            case 1: return city.population;
            case 2: return city.area;
            case 3: return city.pib;
            case 4: return city.attractions;
            case 5: return city.density;
            case 6: return city.pib_per_capita;
            default: return 0;
        }
    }

    // Comparação dos dois atributos para cada carta
    float attribute1_A = get_attribute(arr_cards[0], options1);
    float attribute1_B = get_attribute(arr_cards[1], options1);
    float attribute2_A = get_attribute(arr_cards[0], options2);
    float attribute2_B = get_attribute(arr_cards[1], options2);

    // Determina qual cidade venceu em cada atributo
    float total_A = 0, total_B = 0;

    // Comparação do primeiro atributo
    if (options1 == 5) { // Densidade populacional (menor vence)
        if (attribute1_A < attribute1_B) {
            total_A += attribute1_A;
        } else {
            total_B += attribute1_B;
        }
    } else { // Maior valor vence
        if (attribute1_A > attribute1_B) {
            total_A += attribute1_A;
        } else {
            total_B += attribute1_B;
        }
    }

    // Comparação do segundo atributo
    if (options2 == 5) { // Densidade populacional (menor vence)
        if (attribute2_A < attribute2_B) {
            total_A += attribute2_A;
        } else {
            total_B += attribute2_B;
        }
    } else { // Maior valor vence
        if (attribute2_A > attribute2_B) {
            total_A += attribute2_A;
        } else {
            total_B += attribute2_B;
        }
    }

    // Exibição dos resultados
    printf("\nComparação dos Atributos:\n");
    printf("Atributo 1 (Cidade %s): %.2f vs %.2f (Cidade %s)\n", arr_cards[0].name, attribute1_A, attribute1_B, arr_cards[1].name);
    printf("Atributo 2 (Cidade %s): %.2f vs %.2f (Cidade %s)\n", arr_cards[0].name, attribute2_A, attribute2_B, arr_cards[1].name);

    // Exibição do vencedor baseado na soma dos atributos
    if (total_A > total_B) {
        printf("\nCidade %s venceu a rodada!\n", arr_cards[0].name);
    } else if (total_B > total_A) {
        printf("\nCidade %s venceu a rodada!\n", arr_cards[1].name);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
