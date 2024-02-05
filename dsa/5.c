// Task5: Stack

#include <stdio.h>

#define MAX 100

typedef struct {
  int data[MAX];
  int top;
} Stack;

void init(Stack *s) { s->top = -1; }

int isEmpty(Stack *s) { return s->top < 0; }

int isFull(Stack *s) { return s->top >= MAX - 1; }

void push(Stack *s, int item) {
  if (isFull(s)) {
    printf("Stack is full\n");
    return;
  }
  s->data[++s->top] = item;
}

int pop(Stack *s) {
  if (isEmpty(s)) {
    printf("Stack is empty\n");
    return -1;
  }
  return s->data[s->top--];
}

int peek(Stack *s) {
  if (isEmpty(s)) {
    printf("Stack is empty\n");
    return -1;
  }
  return s->data[s->top];
}

void display(Stack *s) {
  if (isEmpty(s)) {
    printf("Stack is empty\n");
    return;
  }
  for (int i = s->top; i >= 0; i--) printf("%d\n", s->data[i]);
}

int main() {
  Stack s;
  init(&s);
  int choice, item;

  while (1) {
    printf("\n1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.Display\n");
    printf("5.Quit\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter the item to be pushed : ");
        scanf("%d", &item);
        push(&s, item);
        break;
      case 2:
        item = pop(&s);
        if (item != -1) printf("Popped item is : %d\n", item);
        break;
      case 3:
        item = peek(&s);
        if (item != -1) printf("Item at the top is : %d\n", item);
        break;
      case 4:
        display(&s);
        break;
      case 5:
        return 0;
      default:
        printf("Wrong choice\n");
    }
  }

  return 0;
}