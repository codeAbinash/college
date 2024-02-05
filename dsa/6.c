// Task5 : Linear Queue

#include <stdio.h>

#define MAX 5

int queue[MAX];

int front = -1;

int rear = -1;

void insert(int data) {
  if (rear == MAX - 1) {
    printf("Queue is full\n");
  } else {
    if (front == -1) {
      front = 0;
    }
    rear = rear + 1;
    queue[rear] = data;
  }
}

void delete() {
  if (front == -1 || front > rear) {
    printf("Queue is empty\n");
  } else {
    printf("Element deleted from queue is : %d\n", queue[front]);
    front = front + 1;
  }
}

void display() {
  if (front == -1) {
    printf("Queue is empty\n");
  } else {
    printf("Queue elements are : \n");
    for (int i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
    printf("\n");
  }
}

int main() {
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);
  display();
  delete ();
  display();
  return 0;
}

// Output
