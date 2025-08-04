#include <stdio.h> // biblioteca: entrada / saída
#include <stdlib.h> // biblioteca: operações ULA
#include <locale.h> // biblioteca: idiomas

int main()
{
    // algoritmo: entrada + processamento (ULA) + saída
    int N1, N2;
    printf("mini calculadora de inteiros: N1 e N2\n");
    printf("valor de N1: ");
    scanf("%i", &N1);

     printf("valor de N2: ");
    scanf("%i", &N2);

    printf("ADICAO: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRACAO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULT: N1 x N2 = %i * %i = %i\n", N1, N2, N1 * N2);
      //solução "barata" para divisões
    printf("DIV: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
      //solução "cara" para divisões
    printf("DIV2: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);
    printf("QUOCIENTE (int): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
    printf("RESTO (int): N1 mod N2 = %i % %i = %i\n", N1, N2, N1 / N2);
     printf("POTENCIACAO: N1 elevado N2 = pow(%i, %i) = %i\n", N1, N2, pow(N1, N2));
     printf("RADICIACAO: N1 base N2 = pow(%i, 1.0 / %i) = %i\n", N1, N2, pow(N1, 1.0 / N2));
    return 0;
}
