#include <stdio.h> // biblioteca: entrada / saída
#include <stdlib.h> // biblioteca: operações ULA
#include <locale.h> // biblioteca: idiomas
#include <math.h>

int main()
{
     // algoritmo: entrada + processamento (ULA) + saída
    int N1, N2;
    setlocale(LC_ALL, "portuguese");
    printf("Mini calculadora de inteiros: N1 e N2!\n");
    printf("Valor de N1: ");
    scanf("%i", &N1);

     printf("Valor de N2: ");
    scanf("%i", &N2);

    printf("Adição: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("Subtração: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("Multiplicação: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
      //solução "barata" para transformar em float
    printf("Divisão: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
        //solução "cara"  para trasformar em float
    printf("Divisão: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);
    printf("Adição: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("Quociente (int): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
    printf("Resto (int): N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
    printf("Potenciação: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(1.0 * N1, N2));
    printf("Radiciação: N1 rad N2 = %i Rad %i = %.1f\n", N1, N2, pow(N1, 1.0 / N2));

    return 0;
}
