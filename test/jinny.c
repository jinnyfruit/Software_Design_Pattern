#include <stdio.h>
#include <stdlib.h>
int main() {
  int c = 'A' ^ 'B'; 
  printf("%d\n", c);
  int d = 'C' ^ 'A';
  printf("%d\n", d);
  return 0;
}