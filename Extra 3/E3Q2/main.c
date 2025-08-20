#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float h, sexo, peso;
    //ENTRADA
    printf("Peso Ideal: Dados de Entrada:\n");
    printf("Qual o seu sexo?:\n");
    printf("[1] - Masculino\n");
    printf("[2] - Feminino\n");
    scanf("%f", &sexo);

    printf("Qual a sua altura?: "); scanf("%f", &h);



    //PROCESSAMENTO
    if (sexo = 1)
    {
        peso = (72.7 * h) - 58;
    }

    else if (sexo = 2)
    {
        peso = (62.1 * h) - 44.7;
    }

    else
    {
        printf("ERRO\n");
    }

    //SAIDA

    printf("Seu peso é %.2f\n", peso);

    return 0;
}
