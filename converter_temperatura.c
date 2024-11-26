/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float temperaturaCelsius;
    printf("Digite o Valor Inicial em Celsius: ");
    scanf("%f", &temperaturaCelsius);
    
    float temperaturaConvertida = temperaturaCelsius * 9 / 5 + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaConvertida);

    return 0;
}