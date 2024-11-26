/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>

int main()
{
    int lista[] = {64, 34, 25, 12, 22, 11};
    int i, j;
     for (i = 0; i < 6 - 1; i++) {
        for (j = 0; j < 6 - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                int valorAtual = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = valorAtual;
            }
        }
    }
    
    printf("Lista: ");
    
    for (i = 0; i < 6; i++) {
        printf("%d,", lista[i]);
    }
}