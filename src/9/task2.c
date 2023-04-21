#include <stdio.h>
#define N 4

int main() {
  int array[N];

  for (int i = 0; i < N; i++) {
    array[i] = i + 1;
  }

  for (int i = N - 1; i >= 0; i--) {
    printf("%d ", array[i]);
  }

  return 0;
}