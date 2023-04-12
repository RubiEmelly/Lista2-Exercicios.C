#include <stdio.h>

int main()
{
    int idade, ano, meses, dias;
    
    printf("Isira sua idade em anos, mesese e dias: ");
    scanf("%d %d %d", &ano, &meses, &dias);
    
    idade = (dias + (meses*30) + (ano*12)*30);
    printf("Sua idade em dias: %d \n", idade);
}
