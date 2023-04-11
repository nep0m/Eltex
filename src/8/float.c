#include <stdio.h>
#include <stdlib.h>
#include <math.h>

union Bits
  {
    int i;
    float f;
  };

int getbit (int number, int position);

int main(int argc , char* argv[]) {

  
  union Bits num;
  num.f = strtof(argv[1], NULL);
  int position = (int)strtol(argv[2], NULL, 10);

  for (int i = 31; i >=0; i--)
    printf("%d", getbit(num.i, i));
  printf("\n%f\n", num.f);

  num.i = num.i >> position;
  for (int i = 31; i >=0; i--)
    printf("%d", getbit(num.i, i));
  printf("\n%f\n", num.f);

  num.i = num.i << position;
  for (int i = 31; i >=0; i--)
    printf("%d", getbit(num.i, i));
  printf("\n%f", num.f);

  return 0;
}

int getbit (int number, int position) {
  int bit = 1 << position;
  return abs((number & bit) >> position);
}