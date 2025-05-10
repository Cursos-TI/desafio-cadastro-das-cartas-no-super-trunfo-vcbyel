#include <stdio.h>

int main() {
    
char estado[100];
char codigo[100];
char cidade[100];
int populacao;
float area;
float pib;
int numero;

//primeira parte da estruturação da 1º carta

printf ("\n---Dados da Primeira Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado);

    printf ("Código da Carta:");
    scanf("%s", codigo);

    printf ("Cidade:");
    scanf("%s", cidade);

    printf ("População:");
    scanf("%d", &populacao);

   printf ("Área Total");
   scanf("%f", &area);

    // até aqui ta funcionando, depois eu faço o mesmo caminho e ele trava!
    return 0;
    
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
