#include <stdio.h>

int main() {
  printf("Super Trunfo\n");
  printf("Carta 01\n"); //Retorna para o usuário a informação que ele está inserindo a cara número 01
  
  char Nome [50];
  int Populacao; 
  float Area;
  float Pib;
  float Pontosturisticos;

  printf("Digite o nome da Cidade: ");
  scanf("%s", Nome );
  
  printf("Digite a População: ");
  scanf(" %d", &Populacao );

  printf("Digite a Area: ");
  scanf(" %f", &Area );

  printf("Digite o PIB da cidade: ");
  scanf(" %f", &Pib);

  printf("Quantos pontos Turisticos?: ");
  scanf(" %f", &Pontosturisticos);

  printf("Carta 02\n"); //Retorna para o usuário a informação que ele está inserindo a cara número 01

  char Nome2 [50];
  int Populacao2; 
  float Area2;
  float Pib2;
  float Pontosturisticos2;

  printf("Digite o nome da Cidade: ");
  scanf("%s", Nome2 );
  
  printf("Digite a População: ");
  scanf(" %d", &Populacao2 );

  printf("Digite a Area: ");
  scanf(" %f", &Area2 );

  printf("Digite o PIB da cidade: ");
  scanf(" %f", &Pib2 );

  printf("Quantos pontos Turisticos?: ");
  scanf(" %f", &Pontosturisticos2 );


  // Agora o programa retornará as duas cartas inseridas pelo usuário.
  printf("Carta 01\n");
  printf("nome da Cidade é: %s\n", Nome);
  printf("A População é: %d\n", &Populacao);
  printf("A Area é: %f\n", &Area);
  printf("O PIB da cidade é: %f\n", &Pib );
  printf("Pontos Turisticos: %f\n", &Pontosturisticos);

  return 0;
}
