/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int distanciaPercorrida, combustivelConsumido;
    printf("Digite a distancia percorrida em KM: ");
    scanf("%d", &distanciaPercorrida);
    printf("Digite a quantidade de litros de combustível consumidos: ");
    scanf("%d", &combustivelConsumido);
    
    float mediaCombustivel = distanciaPercorrida / combustivelConsumido;
    printf("Média de combustível por KM: %.2f\n", mediaCombustivel);

    return 0;
}