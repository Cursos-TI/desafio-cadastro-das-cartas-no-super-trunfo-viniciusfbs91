#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

/*
O Usuário deve conseguir Criar cartas representando cidades, contendo as seguintes propriedades:
População
Área
PIB
Número de pontos turísticos
*/

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    char nome_cidade[50];
    int quantidade_populacao, numero_pontos_turisticos;
    float area_territorial, valor_pib;

    printf("Bem Vindo ao Super Trunfo - Cadastro de Cartas\n");
    
    printf("Digite o Nome da Cidade:\n");
    scanf("%s",&nome_cidade);

    printf("Digite a quantidade de População residente da Cidade %s:\n",nome_cidade);
    scanf("%d",&quantidade_populacao);

    printf("Digite a Área Territorial da Cidade %s (somente números Ex: 946049):\n",nome_cidade);
    scanf("%f",&area_territorial);

    printf("Digite o Valor PIB da Cidade %s (somente números Ex: 80717.4):\n",nome_cidade);
    scanf("%f",&valor_pib);

    printf("\nCarta Cadastrada com Sucesso!\n");
    printf("Nome: %s\n",nome_cidade);
    printf("População: %d\n",quantidade_populacao);
    printf("Área: %f\n",area_territorial);
    printf("PIB: %f\n",valor_pib);

    return 0;
}
