#include <stdio.h>
#define N 4

int main() {
  int matrix[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i + j >= N - 1) {
        matrix[i][j] = 1;
      } else {
        matrix[i][j] = 0;
      }
      printf("%3d", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}