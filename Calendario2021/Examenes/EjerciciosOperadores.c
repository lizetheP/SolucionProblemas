#include <stdio.h>
#include <stdlib.h>

void main()
{
float res1, res2, res3;

res1 = 5 * 7 * (6 / 2) % 4 * 3 - 10;
printf("\n 1. Resultado: %f", res1);
res2 = ((13 % 6 * 2/4) + (1+6*3-2)) - ((5.0/2));
printf("\n 2. Resultado: %f", res2);
res3 = (2 * 3) + (6 - 2 * 5 / 2 - 4 * 3 / 2.0);
printf("\n 2. Resultado: %f", res3);
if ((4>=7*3+2 && 8 > 3 || 5 > 6) && (7 * 3 < 5 + 12 * 2 ))
    printf("\n 4. Resultado:  Verdadero");
else
    printf("\n 4. Resultado:  Falso");

if ((7 > 3 && 5 <=10) || (5>=10 && 6<20))
    printf("\n 5. Resultado:  Verdadero");
else
    printf("\n 5. Resultado:  Falso");
}
