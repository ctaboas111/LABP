#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    printf("PERIMETRO; Dados de Entrada\n");
    float b, h, p;
    printf("Valor da base (B > 0) em centimetros: ");
    scanf("%f", &b);

    printf("Valor da base (B > 0) em centimetros: ");
    scanf("%f", &h);

    //TRATAMENTO DE ERRO

    if(b <= 0 || h <= 0)
        printf("ERRO: Todo valor deve ser maior que 0");
    else {

        //PROCESSAMENTO
        p = (2 * b) + (2 * h);

        //SAIDA
        printf("Perimetro em centimetros: %.2f\n", p);
        printf("Perimetro em polegadas: %.2f\n", p / 2.54);
        printf("Perimetro em jardas: %.2f\n", p / 2.54 * 0.03);
    }



    return 0;
}
