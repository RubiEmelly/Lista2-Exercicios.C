#include <stdio.h>

int main()
{
    char sexo;
    float h, pesoIdeal; 
    printf("Informe o sexo (M/F)");
    scanf("%c", &sexo);
    printf("Informe a altura(m): ");
    scanf("%f", &h);
    if((sexo == 'M') || (sexo == 'm')){
        pesoIdeal = ((72.7 * h) -58);
    } else{
        pesoIdeal = ((62.1 * h) - 44.7);
    }

    printf("\n O peso Ideal é: %6.2f Kgs ", pesoIdeal);
}