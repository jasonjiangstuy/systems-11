#include "random.h"

char* generate_random(int correct_num_of_bytes) {
  int fh = open("/dev/urandom", O_RDONLY);
  char* myRandomData = calloc(correct_num_of_bytes, sizeof(char));
  read(fh, myRandomData, sizeof(myRandomData));
  return myRandomData;
}
