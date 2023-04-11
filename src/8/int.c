#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getbit (int number, int position);

int main(int argc , char* argv[]) {

  int num = (int)strtol(argv[1], NULL, 10);
  int position = (int)strtol(argv[2], NULL, 10);

  for (int i = 31; i >=0; i--)
    printf("%d", getbit(num, i));
  printf("\n");

  num = num >> position;
  for (int i = 31; i >=0; i--)
    printf("%d", getbit(num, i));
  printf("\n");

  num = num << position;
  for (int i = 31; i >=0; i--)
    printf("%d", getbit(num, i));
  printf("\n");

  return 0;
}

int getbit (int number, int position) {
  int bit = 1 << position;
  return abs((number & bit) >> position);
}