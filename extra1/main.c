#include <stdio.h> // biblioteca: entrada / sa�da
#include <stdlib.h> // biblioteca: opera��es ULA
#include <locale.h> // biblioteca: idiomas
#include <math.h>

int main()
{
     // algoritmo: entrada + processamento (ULA) + sa�da
    int N1, N2;
    setlocale(LC_ALL, "portuguese");
    printf("Mini calculadora de inteiros: N1 e N2!\n");
    printf("Valor de N1: ");
    scanf("%i", &N1);

     printf("Valor de N2: ");
    scanf("%i", &N2);

    printf("Adi��o: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("Subtra��o: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("Multiplica��o: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
      //solu��o "barata" para transformar em float
    printf("Divis�o: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
        //solu��o "cara"  para trasformar em float
    printf("Divis�o: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);
    printf("Adi��o: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("Quociente (int): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
    printf("Resto (int): N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
    printf("Potencia��o: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(1.0 * N1, N2));
    printf("Radicia��o: N1 rad N2 = %i Rad %i = %.1f\n", N1, N2, pow(N1, 1.0 / N2));

    return 0;
}
