/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numeroInput;
    printf("Digite um numero: ");
    scanf("%d", &numeroInput);

    
    (numeroInput % 2 == 0) ? printf("Seu Número é par.") : printf("Seu numero é impar");

    return 0;
}