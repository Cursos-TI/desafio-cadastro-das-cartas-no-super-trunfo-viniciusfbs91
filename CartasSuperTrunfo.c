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

    int opcao, opcao2; // Variável para armazenar a escolha do usuário no menu

    float valor1_carta1 = 0, valor1_carta2 = 0, valor2_carta1 = 0, valor2_carta2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;

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


    // Apresentação Comparação Dados nível Mestre Desenvolvendo a Lógica do Jogo
    
    // Menu para escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao);

    // Menu para escolha do segundo atributo (dinâmico)
    printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    scanf("%d", &opcao2);

    // Função de comparação com lógica para o primeiro atributo
    switch (opcao) {
        case 1:
            valor1_carta1 = quantidade_populacao;
            valor1_carta2 = quantidade_populacao_2;
            break;
        case 2:
            valor1_carta1 = area_territorial;
            valor1_carta2 = area_territorial_2;
            break;
        case 3:
            valor1_carta1 = valor_pib;
            valor1_carta2 = valor_pib_2;
            break;
        case 4:
            valor1_carta1 = quantidade_pontos_turistico;
            valor1_carta2 = quantidade_pontos_turistico_2;
            break;
        case 5:
            valor1_carta1 = densidade_populacao;
            valor1_carta2 = densidade_populacao_2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Função de comparação com lógica para o segundo atributo
    switch (opcao2) {
        case 1:
            valor2_carta1 = quantidade_populacao;
            valor2_carta2 = quantidade_populacao_2;
            break;
        case 2:
            valor2_carta1 = area_territorial;
            valor2_carta2 = area_territorial_2;
            break;
        case 3:
            valor2_carta1 = valor_pib;
            valor2_carta2 = valor_pib_2;
            break;
        case 4:
            valor2_carta1 = quantidade_pontos_turistico;
            valor2_carta2 = quantidade_pontos_turistico_2;
            break;
        case 5:
            valor2_carta1 = densidade_populacao;
            valor2_carta2 = densidade_populacao_2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Regra de comparação: Densidade é inversa
    valor1_carta1 = (opcao == 5) ? 1 / valor1_carta1 : valor1_carta1;
    valor1_carta2 = (opcao == 5) ? 1 / valor1_carta2 : valor1_carta2;
    valor2_carta1 = (opcao2 == 5) ? 1 / valor2_carta1 : valor2_carta1;
    valor2_carta2 = (opcao2 == 5) ? 1 / valor2_carta2 : valor2_carta2;

    // Soma dos valores ajustados
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    // Exibição do resultado
    printf("\nComparação Final:\n");
    printf("Cidade 1: %s\nCidade 2: %s\n", nome_cidade, nome_cidade_2);
    printf("Soma dos dois atributos:\n");
    printf("%s: %.2f\n", nome_cidade, soma_carta1);
    printf("%s: %.2f\n", nome_cidade_2, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("Vencedora: Carta 1 - %s\n", nome_cidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("Vencedora: Carta 2 - %s\n", nome_cidade_2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
