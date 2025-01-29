#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    char estado[30]; // Variável para armazenar o nome do estado
    char codigo[10]; // Variável para armazenar o código da carta
    char cidade[20]; // Variável para armazenar o nome da cidade
    int populacao; // Variável para armazenar o número da população
    float area; // Variável para armazenar a área em km²
    float PIB; // Variável para armazenar o PIB (Produto Interno Bruto)
    int turisticos; // Variável para armazenar o número de pontos turísticos

    // Solicita ao usuário que digite o nome do estado e armazena na variável 'estado'
    printf("Digite aqui o nome do Estado: \n"); 
    scanf("%s", estado);

    // Solicita ao usuário que digite o código da carta e armazena na variável 'codigo'
    printf("Digite aqui o código da carta: \n");
    scanf("%s", codigo);

    // Solicita ao usuário que digite o nome da cidade e armazena na variável 'cidade'
    printf("Digite aqui a Cidade: \n");
    scanf("%s", cidade);

    // Solicita ao usuário que digite a população e armazena na variável 'populacao'
    printf("Digite aqui a População: \n");
    scanf("%d", &populacao);

    // Solicita ao usuário que digite a área da cidade em km² e armazena na variável 'area'
    printf("Digite aqui a Área em km²: \n");
    scanf("%f", &area);

    // Solicita ao usuário que digite o PIB e armazena na variável 'PIB'
    printf("Digite aqui o PIB: \n");
    scanf("%f", &PIB);

    // Solicita ao usuário que digite o número de pontos turísticos e armazena na variável 'turisticos'
    printf("Digite aqui o Número de Pontos Turísticos: \n");
    scanf("%d", &turisticos);
    
    // Exibe os dados coletados na tela
    printf("\nDADOS COLETADOS\n");

    // Exibe o nome do estado informado pelo usuário
    printf("Estado: %s\n", estado);
    
    // Exibe o código da carta informado pelo usuário
    printf("Código da carta: %s\n", codigo);
    
    // Exibe o nome da cidade informado pelo usuário
    printf("Cidade: %s\n", cidade);
    
    // Exibe o número da população informado pelo usuário
    printf("População: %d\n", populacao);
    
    // Exibe a área da cidade com duas casas decimais
    printf("Área: %.2f km²\n", area);
    
    // Exibe o PIB da cidade com duas casas decimais e adiciona a unidade "bilhões de reais"
    printf("PIB: %.2f bilhões de reais\n", PIB);
    
    // Exibe o número de pontos turísticos informado pelo usuário
    printf("Número de Pontos Turísticos: %d\n", turisticos);

    return 0; // Indica que o programa foi executado com sucesso

}
