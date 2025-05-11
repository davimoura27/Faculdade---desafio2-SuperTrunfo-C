#include <stdio.h>
#include <string.h>

int main()
{
    // Dados da Carta 1
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1, densidade1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2, densidade2;
    int pontosTuristicos2;

    printf("*** Cadastre suas cartas ***\n\n");

    // Cadastro Carta 1
    printf("Carta 1:\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    // Cadastro Carta 2
    printf("\nCarta 2:\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    // Menu de Atributos
    int escolha, escolha2;
menu:
    printf("\nSelecione dois atributo diferentes para comparar:\n");
    printf("1) População\n");
    printf("2) Área\n");
    printf("3) PIB\n");
    printf("4) Pontos Turísticos\n");
    printf("5) Densidade Demográfica (vence menor valor)\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha);
    printf("\n\n");

    if (escolha < 1 || escolha > 5)
    {
        printf("Escolha uma opção valida!\n\n");
        goto menu;
    }
    else if (escolha == 1)
    {
        printf("2) Área\n");
        printf("3) PIB\n");
        printf("4) Pontos Turísticos\n");
        printf("5) Densidade Demográfica (vence menor valor)\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha)
        {
            printf("Opção inválida. Escolha um atributo diferente.\n");
            goto menu;
        }
    }
    else if (escolha == 2)
    {

        printf("\n1) População\n");
        printf("3) PIB\n");
        printf("4) Pontos Turísticos\n");
        printf("5) Densidade Demográfica (vence menor valor)\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha)
        {
            printf("Opção inválida. Escolha um atributo diferente.\n");
            goto menu;
        }
    }
    else if (escolha == 3)
    {

        printf("\n1) População\n");
        printf("2) Área\n");
        printf("4) Pontos Turísticos\n");
        printf("5) Densidade Demográfica (vence menor valor)\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha)
        {
            printf("Opção inválida. Escolha um atributo diferente.\n");
            goto menu;
        }
    }
    else if (escolha == 4)
    {
        printf("\n1) População\n");
        printf("2) Área\n");
        printf("3) PIB\n");
        printf("5) Densidade Demográfica (vence menor valor)\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha)
        {
            printf("Opção inválida. Escolha um atributo diferente.\n");
            goto menu;
        }
    }
    else if (escolha == 5)
    {

        printf("\n1) População\n");
        printf("2) Área\n");
        printf("3) PIB\n");
        printf("4) Pontos Turísticos\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha)
        {
            printf("Opção inválida. Escolha um atributo diferente.\n");
            goto menu;
        }
    }

    float valor1Jogador1 = 0, valor2Jogador1 = 0, valor1Jogador2 = 0, valor2Jogador2 = 0;
    char atributo[50], atributo2[50];
    int vencedor = 0;

    switch (escolha)
    {
    case 1:
        valor1Jogador1 = populacao1;
        valor1Jogador2 = populacao2;
        strcpy(atributo, "População");
        break;
    case 2:
        valor1Jogador1 = area1;
        valor1Jogador2 = area2;
        strcpy(atributo, "Área");
        break;
    case 3:
        valor1Jogador1 = pib1;
        valor1Jogador2 = pib2;
        strcpy(atributo, "PIB");
        break;
    case 4:
        valor1Jogador1 = pontosTuristicos1;
        valor1Jogador2 = pontosTuristicos2;
        strcpy(atributo, "Pontos Turísticos");
        break;
    case 5:
        valor1Jogador1 = densidade1;
        valor1Jogador2 = densidade2;
        strcpy(atributo, "Densidade Demográfica");

        break;
    default:

        break;
    }

    // Menu atributo 2
    float resultadoJogador1 = 0, resultadoJogador2 = 0;

    switch (escolha2)
    {
    case 1:
        valor2Jogador1 = populacao1;
        valor2Jogador2 = populacao2;

        resultadoJogador1 = valor1Jogador1 + valor2Jogador1;
        resultadoJogador2 = valor1Jogador2 + valor2Jogador2;

        strcpy(atributo2, "População");

        break;
    case 2:
        valor2Jogador1 = area1;
        valor2Jogador2 = area2;
        strcpy(atributo2, "Área");

        break;
    case 3:
        valor2Jogador1 = pib1;
        valor2Jogador2 = pib2;
        strcpy(atributo2, "PIB");

        break;
    case 4:
        valor2Jogador1 = pontosTuristicos1;
        valor2Jogador2 = pontosTuristicos2;
        strcpy(atributo2, "Pontos Turísticos");

        break;
    case 5:
        valor2Jogador1 = densidade1;
        valor2Jogador2 = densidade2;
        strcpy(atributo2, "Densidade Demográfica");

        break;
    default:

        break;
    }

    // Muda a logica caso selecione densidade

    valor1Jogador1 = (escolha == 5) ? -valor1Jogador1 : valor1Jogador1;
    valor1Jogador2 = (escolha == 5) ? -valor1Jogador2 : valor1Jogador2;
    valor2Jogador1 = (escolha2 == 5) ? -valor2Jogador1 : valor2Jogador1;
    valor2Jogador2 = (escolha2 == 5) ? -valor2Jogador2 : valor2Jogador2;

    // Calcula resultado
    resultadoJogador1 = valor1Jogador1 + valor2Jogador1;
    resultadoJogador2 = valor1Jogador2 + valor2Jogador2;

    // Exibir Resultados
    printf("\n=== Comparação de Cartas ===\n\n");

    printf("Carta 1: %s\n", nomeCidade1);
    printf("%s: %.2f\n", atributo, valor1Jogador1);
    printf("%s: %.2f\n", atributo2, valor2Jogador1);
    printf("Soma:%.2f\n", resultadoJogador1);

    printf("\nCarta 2: %s\n", nomeCidade2);
    printf("%s: %.2f\n", atributo, valor1Jogador2);
    printf("%s: %.2f\n", atributo2, valor2Jogador2);
    printf("Soma:%.2f\n", resultadoJogador2);

    if (resultadoJogador1 > resultadoJogador2)
        printf("\n>> A carta vencedora é: %s (Carta 1)\n", nomeCidade1);
    else if (resultadoJogador2 > resultadoJogador1)
        printf("\n>> A carta vencedora é: %s (Carta 2)\n", nomeCidade2);
    else
        printf("\n>> Empate!\n");

    return 0;
}
