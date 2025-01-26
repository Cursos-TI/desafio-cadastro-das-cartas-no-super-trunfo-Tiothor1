#include <stdio.h>

int main (){
    //Variáveis para armazenar os dados de uma única cidade
    char codigo[4];     // Código da cidade (ex: A01, B02)
    char nome[20];      // Nome da cidade (máximo 19 caracteres)
    int populacao;      // População da cidade
    float area;         // Área da cidade em km²

    int numCartas;      // Quantidade de cidades (cartas) que o ussuário deseja cadastrar
    
    // Pergunta ao usuário quantas cartas ele quer cadastrar
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &numCartas);    // %d para inteiros

    // Início do laço "for" para cadastrar várias cidades.
    // - 'int i = 0': Inicializa o contador 'i' em 0. Esse contador será ussado para controlar as repetiçõe.
    // - 'i < numCartas': O laço vai continuar enquanto 'i' for menor que 'numCartas' (quantidade de cartas).
    // - 'i++': Após cada repetição, o valor de 'i' é incrementado em 1.
    // Aqui ficam as instruções que serão repetidas.

    for (int i = 0; i < numCartas; i++) {

        // Mensagem indicando o início do cadastro da proxima cidade.
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        // Lê o código da cidade (ex: A01, B02).
        printf("Digite o código da cidade (ex: A01): ");
        scanf("%s", codigo); //'%s' para ler uma string (texto sem espaços).

        // Lê o nome da cidade.
        printf("Digite o nome da cidade (sem espaços, maximo 19 caracteres): ");
        scanf("%s", nome);

        // Lê a polulação da cidade (número inteiro).
        printf ("Digite a população da cidade: ");
        scanf("%d", &populacao); // '%d' para ler um número inteiro.

        // Lê a área da cidade (número decimal).
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area); // '%f' para ler um número com casas decimais.

        // Exibe os dados da cidade cadastrada.
        printf("\n--- Dados da Cidade Cadastrada ---\n");
        printf("Código: %s\n", codigo);     // Mostra o codigo da cidade.
        printf("Nome: %s\n", nome);     // Mostra o nome da cidade.
        printf("População: %d habitantes\n", populacao);     // Mostra a população     
        printf("Área: %.2f km²\n", area);        // Mostra a área, com 2 casas decimais.
    }
        printf("\n--- Dados da Cidade Cadastrada ---\n");
        printf("Código: %s\n", codigo);     // Mostra o codigo da cidade.
        printf("Nome: %s\n", nome);     // Mostra o nome da cidade.
        printf("População: %d habitantes\n", populacao);     // Mostra a população     
        printf("Área: %.2f km²\n", area);        // Mostra a área, com 2 casas decimais.
    

    // Mensagem final após o término do cadastro.
    printf("\nCadastro concluído. Obrigado por usar o programa!\n");

    return 0; // Indica que o programa terminou corretamente.
}
