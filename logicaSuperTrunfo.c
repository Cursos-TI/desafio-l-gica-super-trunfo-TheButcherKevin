#include <stdio.h>

int main(){
    char estado, estado2 , cod_carta[40], cod_carta2[40], cidade[20], cidade2[20];
    int pontos_turisticos, pontos_turisticos2, EscolhaDeAtributo;
    float area, PIB, area2, PIB2, PIBpC, PIBpC2, densidade_pop, densidade_pop2;
    unsigned long int populacao, populacao2;

    // Entrada de dados da carta 1
    printf("Insira os dados da carta 1: \nLetra do Estado (A-H): ");
    scanf("%c", &estado);

    printf("Código da carta: ");
    scanf("%s", cod_carta);

    printf("Nome da Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Entrada de dados da carta 2
    printf("\nInsira os dados da carta 2: \nLetra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", cod_carta2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculo PIB p/c e Densidade Populacional
    densidade_pop = populacao / area;
    densidade_pop2 = populacao2 / area2;
    PIBpC = (PIB * 1000000000) / populacao;
    PIBpC2 = (PIB2 * 1000000000) / populacao2;

    // Calculo de Super Poder
    float SuperPoder = (float)populacao + area + PIB + (float)pontos_turisticos + PIBpC + (1.0 / densidade_pop);
    float SuperPoder2 = (float)populacao2 + area2 + PIB2 + (float)pontos_turisticos2 + PIBpC2 + (1.0 / densidade_pop2);

    // Printando os dados
    // printf("\nCarta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %f\n", estado, cod_carta, cidade, populacao, area, PIB, pontos_turisticos, densidade_pop, PIBpC, SuperPoder);
    
    // printf("\nCarta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder %f\n", estado2, cod_carta2, cidade2, populacao2, area2, PIB2, pontos_turisticos2, densidade_pop2, PIBpC2, SuperPoder2);

    // printf("\nComparando Cartas:\n População: Carta 1 venceu (%d)\n Área: Carta 1 venceu (%d)\n PIB: Carta 1 venceu (%d)\n Pontos Turisticos: Carta 1 venceu (%d)\n Densidade Populacional: Carta 2 venceu (%d)\n PIB per Capita: Carta 1 venceu (%d)\n Super Poder: Carta 1 venceu (%d)\n", populacao > populacao2, area > area2, PIB > PIB2, pontos_turisticos > pontos_turisticos2, densidade_pop < densidade_pop2, PIBpC > PIBpC2, SuperPoder > SuperPoder2);
    
    printf("\nQual Atributo Será Comparado? \n 1. População\n 2. Área\n 3. PIB\n 4. Pontos Turisticos\n 5. Densidade Populacional\n");
    scanf("%d", &EscolhaDeAtributo);
    
    switch (EscolhaDeAtributo)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("Carta 1, %s, ganhou com uma população de %d, maior que a de %s com um valor de %d!", cidade, populacao, cidade2, populacao2);
        } else if (populacao < populacao2)
        {
            printf("Carta 2, %s, ganhou com uma população de %d, maior que a de %s com um valor de %d!", cidade2, populacao2, cidade, populacao);
        } else {
            printf("Empate entre as cartas!");
        }
        
        break;
    case 2:
        if (area > area2)
        {
            printf("Carta 1, %s, ganhou com uma area de %.2f, maior que a de %s com um valor de %.2f!", cidade, area, cidade2, area2);
        } else if (area < area2)
        {
            printf("Carta 2, %s, ganhou com uma area de %.2f, maior que a de %s com um valor de %.2f!", cidade2, area2, cidade, area);
        } else {
            printf("Empate entre as cartas!");
        }
        
        break;
    case 3:
        if (PIB > PIB2)
        {
            printf("Carta 1, %s, ganhou com um PIB de %.2f, maior que a de %s com um valor de %.2f!", cidade, PIB, cidade2, PIB2);
        } else if (PIB < PIB2)
        {
            printf("Carta 2, %s, ganhou com um PIB de %.2f, maior que a de %s com um valor de %.2f!", cidade2, PIB2, cidade, PIB);
        } else {
            printf("Empate entre as cartas!");
        }
        
        break;
    case 4:
        if (pontos_turisticos > pontos_turisticos2)
        {
            printf("Carta 1, %s, ganhou com  %d pontos turisticos, maior que a de %s com um valor de %d!", cidade, pontos_turisticos, cidade2, pontos_turisticos2);
        } else if (pontos_turisticos < pontos_turisticos2)
        {
            printf("Carta 2, %s, ganhou com  %d pontos turisticos, maior que a de %s com um valor de %d!", cidade, pontos_turisticos2, cidade2, pontos_turisticos);
        } else {
            printf("Empate entre as cartas!");
        }
        
        break;
    case 5:
        if (densidade_pop < densidade_pop2)
        {
            printf("Carta 1, %s, ganhou com uma densidade demografica de %.2f, menor que a de %s com um valor de %.2f!", cidade, densidade_pop, cidade2, densidade_pop2);
        } else if (densidade_pop > densidade_pop2)
        {
            printf("Carta 1, %s, ganhou com uma densidade demografica de %.2f, menor que a de %s com um valor de %.2f!", cidade, densidade_pop2, cidade2, densidade_pop);
        } else {
            printf("Empate entre as cartas!");
        }
        
        break;
    default:
        printf("Opcao Invalida");
        break;
    }

    // Comparando Cartas
    // if (PIB > PIB2){
    //     printf("\nCarta 1 ganhou com um PIB de %.2f!", PIB);
    // }
    // else if (PIB2 > PIB){
    //     printf("\nCarta 2 ganhou com um PIB de %.2f!", PIB2);
    // }
    // else {
    //     printf("\nEmpate entre as cartas");
    // }

    return 0;
}
