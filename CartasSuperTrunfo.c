#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  char A_state;
  int A_attractions, A_code;
  int A_population;
  //unsigned long int A_population;
  float A_area, A_pib;
  char A_name[169];

  printf("Digite o estado da cidade\n");
  scanf("%c",&A_state);
  getchar();
  printf("Digite o nome da cidade\n");
  fgets(A_name,168,stdin);
  A_name[strcspn(A_name, "\n")] = 0;

  printf("Digite o numero de pontos turisticos na cidade\n");
  scanf("%d",&A_attractions);

  printf("Digite o total populacional da cidade\n");
  scanf("%d",&A_population);

  printf("Digite a area total da cidade\n");
  scanf("%f",&A_area);

  printf("Digite o PIB total da cidade\n");
  scanf("%f",&A_pib);
  
  printf("Digite o codigo da cidade\n");
  scanf("%d",&A_code);
  
  getchar();
  
  float A_density = A_population/A_area;
  float A_pib_per_capita = A_pib/A_population;

  // Exibição dos dados inseridos
  printf("\n--- Dados da Cidade ---\n");
  printf("Estado da cidade: %c\n");
  printf("Nome da cidade: %s\n", A_name);
  printf("Código da cidade: %d\n", A_code);
  printf("População: %d\n", A_population);
  printf("Área: %.2f km²\n", A_area);
  printf("PIB: %.2f\n", A_pib);
  printf("Número de pontos turísticos: %d\n", A_attractions);
  printf("Densidade populacional: %.2f habitantes por km²\n", A_density);
  printf("PIB per capita: %.2f\n", A_pib_per_capita);

  char B_state;
  int B_attractions, B_code;
  int B_population;
  //unsigned long int B_population;
  float B_area, B_pib;
  char B_name[169];
  
  printf("Digite o estado da cidade\n");
  scanf("%c",&B_state);
  getchar();
  printf("Digite o nome da cidade\n");
  fgets(B_name,168,stdin);
  B_name[strcspn(B_name, "\n")] = 0;
  
  printf("Digite o numero de pontos turisticos na cidade\n");
  scanf("%d",&B_attractions);
  
  printf("Digite o total populacional da cidade\n");
  scanf("%d",&B_population);

  printf("Digite a area total da cidade\n");
  scanf("%f",&B_area);

  printf("Digite o PIB total da cidade\n");
  scanf("%f",&B_pib);

  printf("Digite o codigo da cidade\n");
  scanf("%d",&B_code); 

  float B_density = B_population/B_area;
  float B_pib_per_capita = B_pib/B_population;

  // Exibição dos dados inseridos
  printf("\n--- Dados da Cidade ---\n");
  printf("Estado da cidade: %c\n");
  printf("Nome da cidade: %s\n", B_name);
  printf("Código da cidade: %d\n", B_code);
  printf("População: %d\n", B_population);
  printf("Área: %.2f km²\n", B_area);
  printf("PIB: %.2f\n", B_pib);
  printf("Número de pontos turísticos: %d\n", B_attractions);
  printf("Densidade populacional: %.2f habitantes por km²\n", B_density);
  printf("PIB per capita: %.2f\n", B_pib_per_capita);
  /*
  float A_super, B_super;
  A_super = (1/A_density) + B_population + A_area + A_pib + A_attractions + A_code;
  B_super = (1/B_density) + B_population + B_area + B_pib + B_attractions + B_code;
  */
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  return 0;
}
