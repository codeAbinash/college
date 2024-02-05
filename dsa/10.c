#include <stdio.h>

// Heap Sort Algorithm
// Time Complexity : O(n log n)
// Space Complexity O(log n)

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Time Complexity: O(log n)
// Space Complexity: O(log n), because of the recursive calls
void heapify(int arr[], int N, int i) {
  int largest = i;        // The largest Index(root)
  int left = 2 * i + 1;   // The left Index(node)
  int right = 2 * i + 2;  // The Right Index(node)

  if (left < N && arr[left] > arr[largest]) largest = left;  // If left child is larger than root
  if (right < N && arr[right] > arr[largest])
    largest = right;  // If right child is larger than largest

  if (largest == i) return;  // Already a Max Heap

  swap(&arr[i], &arr[largest]);  // Swap the largest with the root
  heapify(arr, N, largest);      // Recursively heapify the affected sub-tree
}

// Time Complexity: O(n * log n)
// Space Complexity: O(log n)
void heapSort(int arr[], int n) {
  // (n / 2 - 1) is the last non-leaf node, because there is
  // no need to heapify leaf nodes, they are already heaps
  // Heapify each node to build a Max Heap
  for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);

  // Swap the largest element with the
  // last element and reduce the heap size
  for (int i = n - 1; i >= 0; i--) {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);
  }
}

int main() {
  int arr[] = {17, 10, 9, 3, -7, 2, 8, 14};
  int n = sizeof(arr) / sizeof(arr[0]);
  heapSort(arr, n);
  for (int i = 0; i < n; i++) printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
