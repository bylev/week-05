

#include <stdio.h>

 int main() {
  const float PI = 3.1416;
  float radio, altura, area, volumen;
  
  printf("¿Radio del cilindro?");
  scanf("%f", &radio );
  printf( "¿Altura del cilindro? " );
  scanf( "%f", &altura );
  area = 2.0 * PI * radio * (radio + altura);
  volumen = PI * radio * radio * altura;
  printf( "Area: %15g\nVolumen: %15g\n", area, volumen );
}