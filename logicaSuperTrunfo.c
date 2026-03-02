#include <stdio.h>

int main(){

    char estado, estado2 , cod_carta[40], cod_carta2[40], cidade[20], cidade2[20];
    int pontos_turisticos, pontos_turisticos2;
    int atributo1, atributo2;

    float area, PIB, area2, PIB2;
    float PIBpC, PIBpC2, densidade_pop, densidade_pop2;

    unsigned long int populacao, populacao2;

    // Carta 1
    printf("Carta 1\nLetra do Estado: ");
    scanf(" %c",&estado);

    printf("Codigo: ");
    scanf("%s",cod_carta);

    printf("Cidade: ");
    scanf("%s",cidade);

    printf("Populacao: ");
    scanf("%lu",&populacao);

    printf("Area: ");
    scanf("%f",&area);

    printf("PIB: ");
    scanf("%f",&PIB);

    printf("Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos);


    // Carta 2
    printf("\nCarta 2\nLetra do Estado: ");
    scanf(" %c",&estado2);

    printf("Codigo: ");
    scanf("%s",cod_carta2);

    printf("Cidade: ");
    scanf("%s",cidade2);

    printf("Populacao: ");
    scanf("%lu",&populacao2);

    printf("Area: ");
    scanf("%f",&area2);

    printf("PIB: ");
    scanf("%f",&PIB2);

    printf("Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos2);


    // Calculos
    densidade_pop = (float)populacao / area;
    densidade_pop2 = (float)populacao2 / area2;

    PIBpC = (PIB * 1000000000) / populacao;
    PIBpC2 = (PIB2 * 1000000000) / populacao2;


    // MENU ATRIBUTO 1
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 Populacao\n2 Area\n3 PIB\n4 Pontos Turisticos\n5 Densidade Demografica\n");
    scanf("%d",&atributo1);


    // MENU ATRIBUTO 2 (DINAMICO)
    printf("\nEscolha o SEGUNDO atributo:\n");

    for(int i=1;i<=5;i++){
        if(i!=atributo1){
            switch(i){
                case 1: printf("1 Populacao\n"); break;
                case 2: printf("2 Area\n"); break;
                case 3: printf("3 PIB\n"); break;
                case 4: printf("4 Pontos Turisticos\n"); break;
                case 5: printf("5 Densidade Demografica\n"); break;
            }
        }
    }

    scanf("%d",&atributo2);

    if(atributo1==atributo2){
        printf("Erro: nao pode escolher o mesmo atributo.\n");
        return 0;
    }


    float v1a1,v1a2,v2a1,v2a2;

    // ATRIBUTO 1
    switch(atributo1){
        case 1: v1a1=populacao; v2a1=populacao2; break;
        case 2: v1a1=area; v2a1=area2; break;
        case 3: v1a1=PIB; v2a1=PIB2; break;
        case 4: v1a1=pontos_turisticos; v2a1=pontos_turisticos2; break;
        case 5: v1a1=densidade_pop; v2a1=densidade_pop2; break;
    }

    // ATRIBUTO 2
    switch(atributo2){
        case 1: v1a2=populacao; v2a2=populacao2; break;
        case 2: v1a2=area; v2a2=area2; break;
        case 3: v1a2=PIB; v2a2=PIB2; break;
        case 4: v1a2=pontos_turisticos; v2a2=pontos_turisticos2; break;
        case 5: v1a2=densidade_pop; v2a2=densidade_pop2; break;
    }


    printf("\nComparacao entre %s e %s\n",cidade,cidade2);

    printf("\nAtributo 1 valores:\n%.2f vs %.2f\n",v1a1,v2a1);

    printf("\nAtributo 2 valores:\n%.2f vs %.2f\n",v1a2,v2a2);


    float soma1 = v1a1 + v1a2;
    float soma2 = v2a1 + v2a2;

    printf("\nSoma carta 1: %.2f",soma1);
    printf("\nSoma carta 2: %.2f\n",soma2);


    if(soma1 > soma2)
        printf("\nCarta 1 (%s) venceu!\n",cidade);

    else if(soma2 > soma1)
        printf("\nCarta 2 (%s) venceu!\n",cidade2);

    else
        printf("\nEmpate!\n");


    return 0;
}
