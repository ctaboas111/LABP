#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   /// ENTRADA:
    float d, x1, x2, y1, y2;

    printf("Distancia entre pontos (P e Q!): Dados de entrada\n");
    printf("Definindo o local de P. Defina o X cartesiano: ");
     scanf("%f", &x1);
    printf("Agora defina o Y de P: ");
     scanf("%f", &y1);
    printf("Definindo o local de Q. Defina o X cartesiano: ");
     scanf("%f", &x2);
      printf("Agora defina o Y de Q: ");
    scanf("%f", &y2);

    /// PROCESSAMENTO

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    /// SAIDA

    printf("A distancia entre P e Q... seria %f!", d);
    return 0;
}
