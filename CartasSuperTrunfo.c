#include <stdio.h>

int main () {

// =========== Carta 1 ===========
    char letraestado1[20], codigocarta1[10], nomecidade1[30];
    int pop1, pontostur1;
    float area1, pib1;

// ========== Carta 2 ============
    char letraestado2[20], codigocarta2[10], nomecidade2[30]; 
    int pop2, pontostur2;
    float area2, pib2;

    // para pular duas linhas eu utilizei o \n\n
    printf("Boas-vindas ao SuperTrunfo \n \n"); 
    
    // ---------- CARTA 1 ------------
    printf("Insira os dados da carta 1: \n \n");

    printf("Insira uma letra de A a H que represente um dos oito estados: \n");
    scanf("%s", letraestado1);

    printf("Insira o código da carta, letra seguido de número: \n");
    scanf("%s", codigocarta1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nomecidade1);
    
    printf("Insira a população: \n"); 
    scanf("%d", &pop1); 

    printf("Insira a área em km^2: \n");
    scanf("%f", &area1);

    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos: \n \n");
    scanf("%d", &pontostur1); 

    printf("Carta 1: \n\n");
    printf("Estado: %s\n", letraestado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", pop1);
    printf("Área: %f km^2 \n", area1); 
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Pontos turísticos: %d A\n", pontostur1); 

    printf("Perfeito! Agora vamos para a segunda carta!\n \n"); 
    
    // -------------- CARTA 2 --------------
    printf("Insira uma letra de A a H que represente um dos oito estados: \n");
    scanf("%s", letraestado2);

    printf("Insira o código da carta, letra seguido de número: \n");
    scanf("%s", codigocarta2); 

    printf("Insira o nome da cidade: \n");
    scanf("%s", nomecidade2); 

    printf("Insira a população: \n"); 
    scanf("%d", &pop2); 

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontostur2);

    printf("Você cadastrou suas cartas com sucesso \n \n"); 

    printf("Carta 2: \n\n");
    printf("Estado: %s\n", letraestado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f km^2 \n", area2); 
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Pontos turísticos: %d\n \n", pontostur2);

    return 0;
}
