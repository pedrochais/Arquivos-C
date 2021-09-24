#include <stdio.h>

int main(void) {
  int a;

  printf("Digite um número inteiro: ");
  scanf("%i", &a);

  if (a % 2 == 0){
    printf("%i é par.", a);
  } else {
    printf("%i é ímpar.", a);
  }
}