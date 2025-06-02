#include <stdio.h>

int main() {

    char letra_estado;
    char codigo_carta[3];
    char nome_cidade[50];
    unsigned long int quantidade_populacao, quantidade_pontos_turistico;
    float area_territorial, valor_pib,densidade_populacao,pib_per_capita;
    float superPoder;

    char letra_estado_2;
    char codigo_carta_2[3];
    char nome_cidade_2[50];
    unsigned long int quantidade_populacao_2, quantidade_pontos_turistico_2;
    float area_territorial_2, valor_pib_2,densidade_populacao_2,pib_per_capita_2;
    float superPoder_2;

    // Inicia o Programa com mensagem de bem vindo.
    printf("Bem Vindo ao Super Trunfo - Cadastro de Cartas\n");
    
    printf("Cadastrando a Carta Número 1\n");

    // Solicita o Letra do estado para o usuário.
    printf("Digite uma Letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%c",&letra_estado);

    // Solicita o Código do estado para o usuário.
    printf("Digite um Código 01 a 04:\n");
    scanf("%s",codigo_carta);

    // Solicita o nome da Cidade para o usuário.
    printf("Digite o Nome da Cidade:\n");
    scanf("%s",nome_cidade);

    // Solicita a População da Cidade para o usuário.
    printf("Digite a quantidade de População residente da Cidade: (somente números Ex: 123456)\n");
    scanf("%lu",&quantidade_populacao);

    // Solicita a área da Cidade para o usuário.
    printf("Digite a Área Territorial da Cidade (somente números Ex: 946049):\n");
    scanf("%f",&area_territorial);

    // Solicita o PIB da Cidade para o usuário.
    printf("Digite o Valor PIB da Cidade em Bilhões (somente números Ex: 80717.4 Bilhões):\n");
    scanf("%f",&valor_pib);

    // Solicita a População da Cidade para o usuário.
    printf("Digite a quantidade de pontos turísticos na Cidade: (somente números Ex: 123456)\n");
    scanf("%lu",&quantidade_pontos_turistico);

    // Dividir a população da cidade pela sua área para obter densidade
    densidade_populacao = quantidade_populacao / area_territorial;

    // *1000000000 para transformar em Bilhao
    valor_pib *= 1000000000;

    // Dividir o Valor PIB da cidade pela sua população para obter pib per capita
    pib_per_capita = valor_pib / quantidade_populacao;

    // Calculo do SuperPoder  soma de (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    superPoder = (float) quantidade_populacao + area_territorial + quantidade_pontos_turistico + pib_per_capita + (1/densidade_populacao);


    printf("Cadastrando a Carta Número 2\n");

    // Solicita o Letra do estado para o usuário.
    printf("Digite uma Letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c",&letra_estado_2);

    // Solicita o Código do estado para o usuário.
    printf("Digite um Código 01 a 04:\n");
    scanf("%s",codigo_carta_2);

    // Solicita o nome da Cidade para o usuário.
    printf("Digite o Nome da Cidade:\n");
    scanf("%s",nome_cidade_2);

    // Solicita a População da Cidade para o usuário.
    printf("Digite a quantidade de População residente da Cidade: (somente números Ex: 123456)\n");
    scanf("%lu",&quantidade_populacao_2);

    // Solicita a área da Cidade para o usuário.
    printf("Digite a Área Territorial da Cidade (somente números Ex: 946049):\n");
    scanf("%f",&area_territorial_2);

    // Solicita o PIB da Cidade para o usuário.
    printf("Digite o Valor PIB da Cidade (somente números Ex: 80717.4):\n");
    scanf("%f",&valor_pib_2);

    // Solicita a População da Cidade para o usuário.
    printf("Digite a quantidade de pontos turísticos na Cidade: (somente números Ex: 123456)\n");
    scanf("%lu",&quantidade_pontos_turistico_2);

    // Dividir a população da cidade pela sua área para obter densidade
    densidade_populacao_2 = quantidade_populacao_2 / area_territorial_2;

    // *1000000000 para transformar em Bilhao
    valor_pib_2 *= 1000000000;

    // Dividir o Valor PIB da cidade pela sua população para obter pib per capita
    pib_per_capita_2 = valor_pib_2 / quantidade_populacao_2;

    // Calculo do SuperPoder  soma de (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    superPoder_2 = (float) quantidade_populacao_2 + area_territorial_2 + quantidade_pontos_turistico_2 + pib_per_capita_2 + (1/densidade_populacao_2);


    // Apresenta a mensagem final para o usuário.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n",letra_estado);
    printf("Código: %c%s\n",letra_estado,codigo_carta);
    printf("Nome da Cidade: %s\n",nome_cidade);
    printf("População: %lu\n",quantidade_populacao);
    printf("Área: %.2f km²\n",area_territorial);
    printf("PIB: %.2f bilhões de reais\n",valor_pib / 1000000000); 
    printf("Número de Pontos Turísticos: %lu\n",quantidade_pontos_turistico);
    printf("Densidade Populacional: : %.2f hab/km²\n",densidade_populacao);
    printf("PIB per Capita: : %.2f reais²\n",pib_per_capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n",letra_estado_2);
    printf("Código: %c%s\n",letra_estado_2,codigo_carta_2);
    printf("Nome da Cidade: %s\n",nome_cidade_2);
    printf("População: %lu\n",quantidade_populacao_2);
    printf("Área: %.2f km²\n",area_territorial_2);
    printf("PIB: %.2f bilhões de reais\n",valor_pib_2/ 1000000000);
    printf("Número de Pontos Turísticos: %lu\n",quantidade_pontos_turistico_2);
    printf("Densidade Populacional: : %.2f hab/km²\n",densidade_populacao_2);
    printf("PIB per Capita: : %.2f reais²\n",pib_per_capita_2);


    // Apresentação Comparação Dados nível Novato Desenvolvendo a Lógica do Jogo
    printf("\n\nComparação de Cartas:\n");

    printf("\n\nComparação de Cartas: (Atributo: População)\n");

    printf("Carta 1 - %s: %d\n",nome_cidade,quantidade_populacao);

    printf("Carta 2 - %s: %d\n",nome_cidade_2,quantidade_populacao_2);

    if (quantidade_populacao>quantidade_populacao_2){
        printf("Resultado: Carta 1 %s venceu!\n",nome_cidade);
    }else{
        printf("Resultado: Carta 2 %s venceu!\n",nome_cidade_2);
    }

    return 0;
}
