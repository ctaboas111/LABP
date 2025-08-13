#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define euroval 0.16
#define dolval 5.40

int main()
{
    /// ENTRADA
    float brl, dol, euro;

    printf("Conversor de moedas! >Baseado nos valores de 12/08/2025.<\n");
    printf("Quantos reais? ");
    scanf("%f", &brl);

    /// PROCESSAMENTO

    euro = brl * euroval;
    dol = brl * dolval;

    /// SAIDA

    printf("%.3f em EUROS: %.3f\n", brl, euro);
    printf("%.3f em DOLARES: %.3f\n", brl, dol);




    printf("\n");
    return 0;
}
