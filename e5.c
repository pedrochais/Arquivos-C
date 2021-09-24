#include <stdio.h>



int main(void) {
  int n = 3, counter = 1,aux = n;

  for(int i = 1; i <= n; i++){
    for(int j = aux-1; j > 0; j--){
      printf(" ");
    } aux--;
    for(int j = 1; j <= i; j++){
      printf("%i ", counter);
      counter++;
    }
    printf("\n");
  }
  

  return 0;
}
