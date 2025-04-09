#include <stdio.h>

int main() {
    // Declarações de variaveis
    char Estado[20], Carta_codigo[20], Cidade[20];

    int Numero_populacional, Numero_pontos_turisticos;

    float area_km, pib;

    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.
    printf(
        "_-_-_-Cartas do Super Trunfo_-_-_-\n"
        "-> Digite o nome do estado: \n"
        );
    scanf("%s", Estado);

    printf("-> Digite o codigo da carta: \n");
    scanf("%s", Carta_codigo);

    printf("-> Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("-> Digite o numero populacional: \n");
    scanf("%d", &Numero_populacional);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib);



    // A printf abaixo exibe uma mensagem com as informações da carta que foram obtidas anteriormente.
    printf(
     "_-_-_-_-_-_- Carta 1 _-_-_-_-_-_- \n"
     "- Estado: %s\n"
     "- Codigo da carta: %s\n"
     "- Cidade: %s\n"
     "- Numero Populacional: %d\n"
     "- Numero de Pontos Turisticos: %d\n"
     "- Area: %f km2\n"
     "- PIB: R$ %f ",
     Estado, Carta_codigo, Cidade, Numero_populacional, Numero_pontos_turisticos, area_km, pib
 );

    // O Mesmo ciclo se repete na carta 2
    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.

    printf("\n_-_-_-_-_-_- Carta 2 _-_-_-_-_-_-\n"
       "-> Digite o nome do estado: \n");
    scanf("%s", Estado);

    printf("-> Digite o codigo da carta: \n");
    scanf("%s", Carta_codigo);

    printf("-> Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("-> Digite o numero populacional: \n");
    scanf("%d", &Numero_populacional);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib);

    // A printf abaixo exibe uma mensagem com as informações da carta que foram obtidas anteriormente.
    printf(
  "_-_-_-_-_-_- Carta 2 _-_-_-_-_-_- \n"
        "- Estado: %s\n"
        "- Codigo da carta: %s\n"
        "- Cidade: %s\n"
        "- Numero Populacional: %d\n"
        "- Numero de Pontos Turisticos: %d\n"
        "- Area: %f km2\n"
        "- PIB: R$ %f ",
        Estado, Carta_codigo, Cidade, Numero_populacional, Numero_pontos_turisticos, area_km, pib
    );

    return 0;
}