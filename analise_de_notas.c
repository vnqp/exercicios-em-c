/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);
    
    float media = (n1 + n2 + n3) / 3;
    printf("A média final do aluno é %.2f\n", media);
    
    
}