#include <stdio.h>

int main() {
    // Declarações de variaveis
    char Estado[20], Carta_codigo[20], Cidade[20];

    int Numero_populacional, Numero_pontos_turisticos;

    float area_km, pib, densidade, pib_per_capita;

    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.
    printf(
        "_-_-_-Cartas do Super Trunfo_-_-_-\n"
        "-> Digite a sigla do estado: \n"
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



    densidade = (float) Numero_populacional / area_km; // Calcula densidade populacional, forçando conversao do int pra float da variavel Numero_populacional  em seguida realizando o calculo e Guardando na variavel densidade
    pib_per_capita = (pib * 1e9) / (float) Numero_populacional; // Converti Numero_populacional de int para float para garantir precisão no cálculo,
    // e multipliquei o PIB (em bilhões) por 1 bilhão (1e9) para converter para valor unitário em reais,
    // obtendo assim o PIB per capita correto em reais por habitante



    printf(
     "_-_-_-_-_-_- Carta 1 _-_-_-_-_-_- \n"
     "- Estado: %s\n"
     "- Codigo da carta: %s\n"
     "- Cidade: %s\n"
     "- Numero Populacional: %d\n"
     "- Numero de Pontos Turisticos: %d\n"
     "- Area: %f km2\n"
     "- PIB: R$ %.2f bilhões de reais\n"
     "- Densidade Populacional: %.2f hab/km²\n"
     "- PIB per Capita: %.2f reais\n",
     Estado, Carta_codigo, Cidade, Numero_populacional, Numero_pontos_turisticos, area_km, pib, densidade, pib_per_capita);

    // O Mesmo ciclo se repete na carta 2
    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.

    printf("\n_-_-_-_-_-_- Carta 2 _-_-_-_-_-_-\n"
       "-> Digite a sigla do estado: \n");
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

    densidade = (float) Numero_populacional / area_km; // Calcula densidade populacional, forçando conversao do int pra float da variavel Numero_populacional  em seguida realizando o calculo e Guardando na variavel densidade
    pib_per_capita = (pib * 1e9) / (float) Numero_populacional; // Converti Numero_populacional de int para float para garantir precisão no cálculo,
    // e multipliquei o PIB (em bilhões) por 1 bilhão (1e9) para converter para valor unitário em reais,
    // obtendo assim o PIB per capita correto em reais por habitante
    printf(
        "_-_-_-_-_-_- Carta 1 _-_-_-_-_-_- \n"
        "- Estado: %s\n"
        "- Codigo da carta: %s\n"
        "- Cidade: %s\n"
        "- Numero Populacional: %d\n"
        "- Numero de Pontos Turisticos: %d\n"
        "- Area: %.3f km2\n"
        "- PIB: R$ %.2f bilhões de reais\n"
        "- Densidade Populacional: %.2f hab/km²\n"
        "- PIB per Capita: R$ %.2f \n",
        Estado, Carta_codigo, Cidade, Numero_populacional, Numero_pontos_turisticos, area_km, pib, densidade, pib_per_capita
    );

    return 0;
}