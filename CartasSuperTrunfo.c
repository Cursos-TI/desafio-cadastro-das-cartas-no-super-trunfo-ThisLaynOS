#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Estado1[20], Carta_codigo1[20], Cidade1[20];

    int Numero_populacional1;
    int Numero_pontos_turisticos1;

    float area_km1, pib1;


    char Estado2[20], Carta_codigo2[20], Cidade2[20];

    int Numero_populacional2;
    int Numero_pontos_turisticos2;

    float area_km2, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.
    printf(
        "_-_-_-Cartas do Super Trunfo_-_-_-\n"
        "-> Digite a sigla do estado: \n"
        );
    scanf("%s", Estado1);

    printf("-> Digite o codigo da carta: \n");
    scanf("%s", Carta_codigo1);

    printf("-> Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("-> Digite o numero populacional: \n");
    scanf("%d", &Numero_populacional1);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos1);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km1);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib1);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(
        "_-_-_-_-_-_- Carta 1 _-_-_-_-_-_- \n"
        "- Estado: %s\n"
        "- Codigo da carta: %s\n"
        "- Cidade: %s\n"
        "- Numero Populacional: %d\n"
        "- Numero de Pontos Turisticos: %d\n"
        "- Area: %f km2\n"
        "- PIB: R$ %.2f bilhões de reais\n",
        Estado1, Carta_codigo1, Cidade1, Numero_populacional1, Numero_pontos_turisticos1, area_km1, pib1);

        
    
    // O Mesmo ciclo se repete na carta 2
    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.


    printf("\n_-_-_-_-_-_- Carta 2 _-_-_-_-_-_-\n"
        "-> Digite a sigla do estado: \n");
     scanf("%s", Estado2);
 
     printf("-> Digite o codigo da carta: \n");
     scanf("%s", Carta_codigo2);
 
     printf("-> Digite o nome da cidade: \n");
     scanf("%s", Cidade2);
 
     printf("-> Digite o numero populacional: \n");
     scanf("%d", &Numero_populacional2);
 
     printf("-> Digite o numero de pontos turisticos: \n");
     scanf("%d", &Numero_pontos_turisticos2);
 
     printf("-> Digite o numero da Area Km: \n");
     scanf("%f", &area_km2);
 
     printf("-> Digite o numero do pib: \n");
     scanf("%f", &pib2);
 

     printf(
        "_-_-_-_-_-_- Carta 2 _-_-_-_-_-_- \n"
        "- Estado: %s\n"
        "- Codigo da carta: %s\n"
        "- Cidade: %s\n"
        "- Numero Populacional: %d\n"
        "- Numero de Pontos Turisticos: %d\n"
        "- Area: %f km2\n"
        "- PIB: R$ %.2f bilhões de reais\n",
        Estado2, Carta_codigo2, Cidade2, Numero_populacional2, Numero_pontos_turisticos2, area_km2, pib2);
    return 0;
}
