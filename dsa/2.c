// Task2: Deletion in an array

#include "stdio.h"

int main() {
  int arr[100], n, pos;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the position where you want to delete an element: ");
  scanf("%d", &pos);
  pos--;                              // Adjust for 0-based indexing
  for (int i = pos; i < n - 1; i++) { // Start from pos, not pos + 1
    arr[i] = arr[i + 1];
  }
  printf("The array after deletion is: ");
  for (int i = 0; i < n - 1; i++) { // Print n - 1 elements
    printf("%d ", arr[i]);
  }
  return 0;
}