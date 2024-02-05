// Task1 :  Insertion in an array

#include "stdio.h"
int main() {
  int arr[100], n, pos, val;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the position where you want to insert the element: ");
  scanf("%d", &pos);
  pos--;  // Adjust for 0-based indexing
  printf("Enter the value you want to insert: ");
  scanf("%d", &val);
  for (int i = n; i > pos; i--) {  // Start from n, not n - 1
    arr[i] = arr[i - 1];
  }
  arr[pos] = val;
  printf("The array after insertion is: ");
  for (int i = 0; i <= n; i++) {  // Print n + 1 elements
    printf("%d ", arr[i]);
  }
  return 0;
}