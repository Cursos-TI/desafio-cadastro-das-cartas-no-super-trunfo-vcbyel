#include <stdio.h> //inclusao da biblioteca


int main() {

    // designação de variaveis
    
char estado[100];
char codigo[100];
char cidade[100];
int populacao;
float area;
float pib;
int numero;

//primeira parte da estruturação da 1º carta

printf ("\n---Insira os Dados da Primeira Carta---\n"); //isso aqui é só cabeçalho, se não precisar eu tiro

printf ("Digite seu Estado:");
    scanf("%s", &estado);

    printf ("Código da Carta:");
    scanf("%s", codigo);

    printf ("Cidade:");
    scanf("%s", cidade);

    printf ("População:");
    scanf("%d", &populacao);

    printf ("Área Total: ");
    scanf("%f", &area);
    
    printf ("PIB:");
    scanf("%f", &pib);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero);
    
     // Impressão
    
    printf("\n--- Dados da Primeira Carta ---\n"); // cabeçalho impresso depois de os dados inseridos
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);   // na minha ide não saiu esse %.2f veio quando trouxe pra cá
    printf("PIB: %.2f\n", pib);
    printf("Nº de Pontos Turísticos: %d\n", numero);

    // ainda nao resolvi a questão de colocar ponto na variavel int populacao

    
    printf ("\n---Insira Dados da Segunda Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado2);

    printf ("Código da Carta:");
    scanf("%s", codigo2);

    printf ("Cidade:");
    scanf("%s", cidade2);

    printf ("População:");
    scanf("%d", &populacao2);

    printf ("Área Total: ");
    scanf("%f", &area2);
    
    printf ("PIB:");
    scanf("%f", &pib2);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero2);
    
     // Impressão
    
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Nº de Pontos Turísticos: %d\n", numero2);
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
