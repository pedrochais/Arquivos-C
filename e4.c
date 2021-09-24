#include <stdio.h>

int main(void) {
  int dia, mes, ano;

  printf("Digite um número específico de dias (apenas inteiros): ");
  scanf("%i", &dia);

  ano = dia / 365;
  mes = (dia % 365)/30;
  dia = (dia % 365) - mes*30;

  printf("Ano(s): %i\n", ano);
  printf("Mês(es): %i\n", mes);
  printf("Dia(s): %i\n", dia);

  return 0;
}