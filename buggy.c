#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(10 * sizeof(int));
  p[10] = 42;              // out-of-bounds write
  printf("%d\n", p[10]);
  return 0;                // memory leak (p not freed)
}
