#include <stdio.h>
#include "tinyexpr.h"

int main(void) {
  printf("Fatorial\n");
  int error;
  double b = te_interp("3!", &error);
  printf("%f\n", b);
  return 0;
}

/*
Inclua o suporte ao operador fatorial no TinyExpr de tal sorte que esta expressão seja calculada: "2 * 5! / 3"
isso dá 80
*/