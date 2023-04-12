8)Escreva um algoritmo que leia três números inteiros e positivos 
(A, B, C) e mostre-os em ordem decrescente.


#include <stdio.h>

int main()
{
    int A, B, C;
    printf("Digite 3 números inteiros e positivos: ");
    scanf("%d %d %d", &A, &B, &C);
    if(A>B && B>C) printf("%d %d %d", A, B, C);
    else if(A>C && C>B) printf("%d %d %d", A, C, B);
    else if(B>A && A>C) printf("%d %d %d", B, A, C);
    else if(B>C && C>B) printf("%d %d %d", B, C, A);
    else if(C>A && A>B) printf("%d %d %d", C, A, B);
    else printf("%d %d %d", C, B, A);
}