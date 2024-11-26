/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);
  
    int i, fatorial;
    fatorial = n1;
    for (i = n1 - 1 ; i > 0 ; i--) {
        fatorial *= i;
    }
    
    printf("O fatorial de %d é %d", n1, fatorial);
    
}