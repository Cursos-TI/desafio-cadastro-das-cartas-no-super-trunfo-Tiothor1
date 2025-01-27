#include <stdio.h> // Biblioteca para entrada e saída

int main (){
    //Variáveis para armazenar os dados de uma única cidade
    int populacao1, populacao2, populacao3;    // População
    float area1, area2, area3;    // Área
    float pib1, pib2, pib3;    // PIB
    int pontos1, pontos2, pontos3;    // Pontos turísticos

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade: \n");
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade: \n");
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cadastro da terceira cidade
    printf("\nCadastro da terceira cidade: \n");
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao3);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area3);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib3);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos3);

    // Exibição dos dados cadastrados
    printf("\n--- Cidades Cadastradas ---\n");

    // Exibição da primeira cidade
    printf("\nPrimeira cidade: \n");
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição da segunda cidade
    printf("\nSegunda cidade: \n");
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    // Exibição da terceira cidade
    printf("\nTerceira cidade: \n");
    printf("População: %d habitantes\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões\n", pib3);
    printf("Pontos turísticos: %d\n", pontos3);

    return 0;
}
