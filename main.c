#include "random.h"

int main() {
  int i ;
  // generate array of 10 random ints  4 bytes each
  int* randomData = generate_random(10);
  for (i = 0; i < 10; i ++){
    printf("%d\n", randomData[i]);

  }
  // printf("%d\n", generate_random(50));
  return 0;
}
