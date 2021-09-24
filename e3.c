#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, c, maior;

  printf("Digite três números inteiros: ");
  scanf("%i %i %i", &a, &b, &c);
  maior = a;

  if (b >= maior) maior = b;
  if (c >= maior) maior = c;

  printf("O maior número é %i", maior);
  
  return 0;
}