#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
  srand((unsigned)time(NULL)); //seeds random number in accordance to time

  int r_int = rand() % 26; // generates random number from 0 to 25
  char r_char = 'A' + r_int; //adds 0 to 25 to the random number
  return r_char;
}
