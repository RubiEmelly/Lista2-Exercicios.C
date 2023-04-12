1)Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A 
seguir, encontre o maior dos 3 valores e o escreva com a mensagem : 
"É o maior ".


#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("Valor A é o maior");
    }else if(b>c){
        printf("Valor B é o maior");
    }else{
        printf("Valor C é o maior");
    }
}