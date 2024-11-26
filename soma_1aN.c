/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, i, soma;
    
    printf("Digite um numero: ");
    scanf("%d", &n1);
    
    for(i = 0; i <= n1; i++) {
        soma += i;
    }
    
    printf("A soma de todos os numeros até %d é %d", n1, soma);
}