#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    
    int codigo1, codigo2;
    char nome[15];
    float area;
    int populacao;
    float PIB;
    int NPT;
    

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Digite o Número de pontos turísticos: \n");
    scanf ("%d", &NPT);

    printf("Digite o Código do País: \n");
    scanf ("%d", &codigo1);

    printf("Digite o Código da Cidade: \n");
    scanf ("%c", &codigo2);

    printf ("-Nome da Cidade:%s \n", nome);
    printf ("-Código da cidade:%d \n", codigo1, codigo2);
    printf ("-População:%d \n", populacao);
    printf ("-Área da cidade:%f \n", area);
    printf ("-PIB:%f \n", PIB);
    printf ("-Número de pontos turisticos:%d \n", NPT);
    


    return 0;
}