/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if ((ano % 4 == 0) && (ano % 400 != 0)) {
        printf("%d é um ano bissexto", ano);
    } else {
        printf("%d não é um ano bissexto", ano);
    }
}