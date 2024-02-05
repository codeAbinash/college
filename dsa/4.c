// Task4: Multiplication of two arrays(MATRICES)

#include <stdio.h>

int main() {
  int a[10][10], b[10][10], c[10][10], m, n, p, q;
  printf(
      "Enter the number of rows and columns of the first matrix: (m, n), "
      "m,n <= 10\n");
  scanf("%d %d", &m, &n);
  printf(
      "Enter the number of rows and columns of the second matrix: (p, q), "
      "p,q <= 10\n");
  scanf("%d %d", &p, &q);

  if (n != p) {
    printf("The matrices cannot be multiplied\n");
    return 0;
  }

  printf("Enter the elements of the first matrix: \n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
  }

  printf("Enter the elements of the second matrix: \n");
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) scanf("%d", &b[i][j]);
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      c[i][j] = 0;
      for (int k = 0; k < n; k++) c[i][j] += a[i][k] * b[k][j];
    }
  }

  printf("The product of the two matrices is: \n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) printf("%d ", c[i][j]);
    printf("\n");
  }
  return 0;
}
