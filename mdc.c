/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>

int main()
{   
    int n1, n2, resto;

    
    printf("Digite o numero 1:");
    scanf("%d", &n1);
    printf("Digite o numero 2:");
    scanf("%d", &n2);
    
    int n2Inicial = n2;
    while ((n1 % n2) > 0) {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    
    printf("O MDC entre %d e %d é %d", n1, n2Inicial, n2);
}