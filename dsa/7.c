// Task7 : Circular Queue

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int queue[SIZE], front = -1, rear = -1;

int isEmpty() { return front == -1 && rear == -1; }

int isFull() { return (rear + 1) % SIZE == front; }

void enqueue(int data) {
  if (isFull()) {
    printf("Queue is full\n");
    return;
  }
  if (isEmpty())
    front = rear = 0;
  else
    rear = (rear + 1) % SIZE;
  queue[rear] = data;
}

int dequeue() {
  if (isEmpty()) {
    printf("Queue is empty\n");
    exit(0);
  }
  int data = queue[front];
  if (front == rear && front != -1)
    front = rear = -1;
  else
    front = (front + 1) % SIZE;
  return data;
}

void display() {
  if (isEmpty()) {
    printf("Queue is empty\n");
    return;
  }
  printf("Queue: ");
  for (int i = front; i != rear; i = (i + 1) % SIZE)
    printf("%d ", queue[i]);
  printf("%d\n", queue[rear]);
}

int main() {
  int choice, data;

  while (1) {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter data to enqueue: ");
      scanf("%d", &data);
      enqueue(data);
      break;
    case 2:
      printf("Dequeued %d\n", dequeue());
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}