#include "random.h"
#include <unistd.h>

int main() {
  int i ;
  // generate array of 10 random ints  4 bytes each
  int* randomData = generate_random(10);
  for (i = 0; i < 10; i ++){
    printf("%d\n", randomData[i]);

  }

  int fh = open("./test.txt", O_RDWR, 0777);
  write( fh, randomData, 10 * sizeof(int));
  int* newArray = calloc(10, sizeof(int));
  fh = open("./test.txt", O_RDWR, 0777);
  read(fh, newArray, 10 * sizeof(int));
  printf("new ARRAY\n");
  for (i = 0; i < 10; i ++){
    printf("%d\n", newArray[i]);

  }
  // printf("%d\n", generate_random(50));
  return 0;
}
