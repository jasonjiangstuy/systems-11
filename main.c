#include "random.h"

int main() {
  int myarray[10];
  int i ;
  for (i = 0; i < 10; i ++){
    myarray[i] = generate_random(50);
    printf("%d\n", myarray[i]);

  }
  printf("%d\n", generate_random(50));
  return 0;
}
