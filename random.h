#ifndef MY_RANDOM
#define MY_RANDOM

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int* generate_random(int correct_num_of_bytes);
#endif
