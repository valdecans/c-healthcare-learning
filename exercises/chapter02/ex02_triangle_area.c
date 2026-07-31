#include <stdio.h>

int main(void) {
  int base = 5;
  int height = 8;
  float triangle_area = 0.5 * base * height;

  printf("Triangle base: %d\n", base);
  printf("Triangle height: %d\n", height);
  printf("Triangle area: %.2f\n", triangle_area);

  return 0;
}
