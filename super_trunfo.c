#include <stdio.h>

int main() {
    // Declarações de variaveis
    char Estado1[20], Carta_codigo1[20], Cidade1[20];

    unsigned long int Numero_populacional1;
    int Numero_pontos_turisticos1;

    float area_km1, pib1, densidade1, pib_per_capita1;

    float super_poder1;


    char Estado2[20], Carta_codigo2[20], Cidade2[20];

    unsigned long int Numero_populacional2;
    int Numero_pontos_turisticos2;

    float area_km2, pib2, densidade2, pib_per_capita2;

    float super_poder2;

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
    scanf("%ld", &Numero_populacional1);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos1);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km1);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib1);

    densidade1 = (float) Numero_populacional1 / area_km1; // Calcula densidade populacional, forçando conversao do int pra float da variavel Numero_populacional  em seguida realizando o calculo e Guardando na variavel densidade
    pib_per_capita1 = (pib1 * 1e9) / (float) Numero_populacional1; // Converti Numero_populacional de int para float para garantir precisão no cálculo,
    // e multipliquei o PIB (em bilhões) por 1 bilhão (1e9) para converter para valor unitário em reais,
    // obtendo assim o PIB per capita correto em reais por habitante

    super_poder1 = (float) Numero_populacional1 + area_km1 + pib1 + pib_per_capita1 + (area_km1 / (float) Numero_populacional1) + Numero_pontos_turisticos1; // Soma de todos atributos com o inverso de densidade (area_km1 / (float) Numero_populacional1) no final tudo e calculado e o valor e amazenado na variavel super_poder1


    printf(
     "_-_-_-_-_-_- Carta 1 _-_-_-_-_-_- \n"
     "- Estado: %s\n"
     "- Codigo da carta: %s\n"
     "- Cidade: %s\n"
     "- Numero Populacional: %ld\n"
     "- Numero de Pontos Turisticos: %d\n"
     "- Area: %f km2\n"
     "- PIB: R$ %.2f bilhões de reais\n"
     "- Densidade Populacional: %.2f hab/km²\n"
     "- PIB per Capita: %.2f reais\n"
     "- Super Poder: %.2f\n",
     Estado1, Carta_codigo1, Cidade1, Numero_populacional1, Numero_pontos_turisticos1, area_km1, pib1, densidade1, pib_per_capita1, super_poder1);

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
    scanf("%ld", &Numero_populacional2);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos2);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km2);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib2);

    densidade2 = (float) Numero_populacional2 / area_km2; // Calcula densidade populacional, forçando conversao do int pra float da variavel Numero_populacional  em seguida realizando o calculo e Guardando na variavel densidade
    pib_per_capita2 = (pib2 * 1e9) / (float) Numero_populacional2; // Converti Numero_populacional de int para float para garantir precisão no cálculo,
    // e multipliquei o PIB (em bilhões) por 1 bilhão (1e9) para converter para valor unitário em reais,
    // obtendo assim o PIB per capita correto em reais por habitante

    super_poder2 = (float) Numero_populacional2 + area_km2 + pib2 + pib_per_capita2 + (area_km2 / (float) Numero_populacional2) + Numero_pontos_turisticos2; // Soma de todos atributos com o inverso de densidade (area_km2 / (float) Numero_populacional2) no final tudo e calculado e o valor e amazenado na variavel super_poder2

    printf(
        "_-_-_-_-_-_- Carta 2 _-_-_-_-_-_- \n"
        "- Estado: %s\n"
        "- Codigo da carta: %s\n"
        "- Cidade: %s\n"
        "- Numero Populacional: %ld\n"
        "- Numero de Pontos Turisticos: %d\n"
        "- Area: %.3f km2\n"
        "- PIB: R$ %.2f bilhões de reais\n"
        "- Densidade Populacional: %.2f hab/km²\n"
        "- PIB per Capita: R$ %.2f \n"
        "- Super Poder: %.2f \n",
        Estado2, Carta_codigo2, Cidade2, Numero_populacional2, Numero_pontos_turisticos2, area_km2, pib2, densidade2, pib_per_capita2,super_poder2
    );




    // Exibição da comparação das cartas
    printf("Comparação de cartas:\n");

    // Comparação do número populacional das duas cartas. Se a carta 1 tiver população maior, retorna 1 (verdadeiro), senão 0 (falso)
    int com_populacao_cartas = Numero_populacional1 > Numero_populacional2;
    printf("População: Carta 1 venceu (%d)\n", com_populacao_cartas);

    // Comparação das áreas. Se a área da carta 1 for maior, retorna 1 (verdadeiro), senão 0
    int com_area_cartas = area_km1 > area_km2;
    printf("Área: Carta 1 venceu (%d)\n", com_area_cartas);

    // Comparação do PIB. Se o PIB da carta 1 for maior, retorna 1 (verdadeiro), senão 0
    int com_pib_cartas = pib1 > pib2;
    printf("PIB: Carta 1 venceu (%d)\n", com_pib_cartas);

    // Comparação do número de pontos turísticos. Se a carta 1 tiver mais pontos turísticos, retorna 1
    int com_pontos_turistico_cartas = Numero_pontos_turisticos1 > Numero_pontos_turisticos2;
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", com_pontos_turistico_cartas);

    // Comparação da densidade populacional. Aqui, quanto menor a densidade, melhor — por isso usa sinal de menor (<)
    int com_densidade_cartas = densidade1 < densidade2;
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", com_densidade_cartas);

    // Comparação do PIB per capita. Se o PIB per capita da carta 1 for maior, retorna 1
    int com_pib_per_capita_cartas = pib_per_capita1 > pib_per_capita2;
    printf("PIB per capita: Carta 1 venceu (%d)\n", com_pib_per_capita_cartas);

    // Comparação do "super poder", uma métrica composta. Se o da carta 1 for maior, retorna 1
    int com_super_poder_cartas = super_poder1 > super_poder2;
    printf("Super Poder: Carta 1 venceu (%d)\n", com_super_poder_cartas);


    return 0;
}
