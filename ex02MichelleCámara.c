
#include <stdio.h>



  int main () {
  float horas, minutos, segundos;
  printf ("Ingrese cantidad en segundos:");
  scanf("%f", &segundos);
  horas=(segundos/3600);
  minutos=(segundos/60);
  printf("Horas : %.0f\n", horas);
  printf("Minutos : %.0f\n", minutos);
  return 0;
  }