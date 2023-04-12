2)Elaborar um algoritmo que lê 2 valores a e b e os escreve com a 
mensagem: "São múltiplos" ou "Não são múltiplos".


#include <stdio.h>
int main(){
int a, b;

printf ("Digite 2 valores:\n");
scanf("%d %d", &a, &b);
  if ((a%b) ==0){
    printf("\n\n%d e %d são múltiplos", a, b);
  }else{
    printf("\n\n%d e %d não são múltiplos", a, b);
  }
}