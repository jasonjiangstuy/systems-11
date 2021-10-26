#include "random.h"

int* generate_random(int correct_num_of_bytes) {
  int fh = open("/dev/urandom", O_RDONLY);
  int* myRandomData = calloc(correct_num_of_bytes, sizeof(int));
  read(fh, myRandomData, sizeof(int)*correct_num_of_bytes);
  return myRandomData;
}
