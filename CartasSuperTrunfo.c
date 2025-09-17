#include <stdio.h>

int main() {
    char carta1[50] = "Carta 1";
    char estado[50], codigo[50], cidade[50];
    float PIB, area;
    unsigned long int populacao;
    int turisticos;

    char carta2[50] = "Carta 2";
    char estado2[50], codigo2[50], cidade2[50];
    float PIB2, area2;
    unsigned long int populacao2;
    int turisticos2;

    // ======= CARTA 1 =======
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o nome do estado: ");
    scanf(" %49[^\n]", estado);
    printf("Digite o código da carta: ");
    scanf(" %49s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos);
    printf("Digite a população: ");
    scanf("%lu", &populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &area);

    double percapita = (PIB * 1e9) / (double)populacao;
    double densidade = (double)populacao / area;
    double super = populacao + area + (PIB * 1e9) + turisticos + percapita + (1.0 / densidade);

    // ======= CARTA 2 =======
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o nome do estado: ");
    scanf(" %49[^\n]", estado2);
    printf("Digite o código da carta: ");
    scanf(" %49s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    double percapita2 = (PIB2 * 1e9) / (double)populacao2;
    double densidade2 = (double)populacao2 / area2;
    double super2 = populacao2 + area2 + (PIB2 * 1e9) + turisticos2 + percapita2 + (1.0 / densidade2);

    // ======= EXIBE DADOS =======
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado, codigo, cidade);
    printf("PIB: %.2f bilhões\nPopulação: %lu\nÁrea: %.2f km²\nPontos Turísticos: %d\n",
           PIB, populacao, area, turisticos);
    printf("Renda per capita: %.2f\nDensidade: %.2f\nSuperpoder: %.2f\n",
           percapita, densidade, super);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("PIB: %.2f bilhões\nPopulação: %lu\nÁrea: %.2f km²\nPontos Turísticos: %d\n",
           PIB2, populacao2, area2, turisticos2);
    printf("Renda per capita: %.2f\nDensidade: %.2f\nSuperpoder: %.2f\n",
           percapita2, densidade2, super2);

    // ======= MENU DE COMPARAÇÃO =======
    int opcao;
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade (menor vence)\n");
    printf("6 - Renda per capita\n");
    printf("7 - Superpoder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", carta1, carta2);

    switch (opcao) {
        case 1:
            if (populacao > populacao2) printf("População: Carta 1 venceu\n");
            else if (populacao < populacao2) printf("População: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        case 2:
            if (area > area2) printf("Área: Carta 1 venceu\n");
            else if (area < area2) printf("Área: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        case 3:
            if (PIB > PIB2) printf("PIB: Carta 1 venceu\n");
            else if (PIB < PIB2) printf("PIB: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        case 4:
            if (turisticos > turisticos2) printf("Pontos Turísticos: Carta 1 venceu\n");
            else if (turisticos < turisticos2) printf("Pontos Turísticos: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        case 5: // MENOR densidade vence
            if (densidade < densidade2) printf("Densidade: Carta 1 venceu\n");
            else if (densidade > densidade2) printf("Densidade: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        case 6:
            if (percapita > percapita2) printf("Renda per capita: Carta 1 venceu\n");
            else if (percapita < percapita2) printf("Renda per capita: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        case 7:
            if (super > super2) printf("Superpoder: Carta 1 venceu\n");
            else if (super < super2) printf("Superpoder: Carta 2 venceu\n");
            else printf("Empate\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}