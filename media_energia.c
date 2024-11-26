/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>

int main()
{
    int c1, c2, c3;
    
    printf("Digite o consumo de energia no mês 1: ");
    scanf("%d", &c1);
    printf("Digite o consumo de energia no mês 1: ");
    scanf("%d", &c2);
    printf("Digite o consumo de energia no mês 1: ");
    scanf("%d", &c3);
        
    int mediaConsumo = (c1 + c2 + c3) / 3;
    printf("A media de consumo foi de %d nos ultimos 3 meses", mediaConsumo);
}