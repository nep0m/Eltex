#include <stdio.h>
#define N 10

int main() {
  int num = 0;
  int delta_top = 0;
  int delta_right = 0;
  int delta_bot = 0;
  int delta_left = 0;
  int matrix[N][N];
  while (num < N * N) {
    for (int i = delta_left; i < N - delta_right; i++) {
      matrix[delta_top][i] = ++num;
    }
    delta_top++;

    for (int i = delta_top; i < N - delta_bot; i++) {
      matrix[i][N - delta_right - 1] = ++num;
    }
    delta_right++;

    for (int i = N - delta_right - 1; i >= delta_left; i--) {
      matrix[N - delta_bot - 1][i] = ++num;
    }
    delta_bot++;

    for (int i = N - delta_bot - 1; i >= delta_top; i--) {
      matrix[i][delta_left] = ++num;
    }
    delta_left++;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) printf("%3d", matrix[i][j]);
    printf("\n");
  }

  return 0;
}