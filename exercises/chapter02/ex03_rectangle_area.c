#include <stdio.h>

int main(void) {
  float width = 21.5;  // m
  float height = 13.5; // m
  float rectangle_area = width * height;

  printf("Rectangle width: %.1fm\n", width);
  printf("Rectangle height: %.1fm\n", height);
  printf("Rectangle area: %.1fm²\n", rectangle_area);

  return 0;
}
