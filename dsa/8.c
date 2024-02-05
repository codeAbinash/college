// Task8: Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void insertAfter(Node *head, int data, int key) {
  if (head == NULL) {
    printf("Cannot insert. List is empty\n");
    return;
  }
  Node *p = head, *q = NULL;

  while (p != NULL && p->data != key) {
    q = p;
    p = p->next;
  }

  if (p == NULL) {
    printf("Key not found\n");
    return;
  }

  Node *newNode = createNode(data);
  newNode->next = p->next;
  p->next = newNode;
}

void insertBefore(Node **head, int data, int key) {
  if (*head == NULL) {
    printf("Cannot insert. List is empty\n");
    return;
  }
  Node *p = *head, *q = NULL;

  while (p != NULL && p->data != key) {
    q = p;
    p = p->next;
  }

  if (p == NULL) {
    printf("Key not found\n");
    return;
  }

  Node *newNode = createNode(data);
  if (p == *head) {
    newNode->next = *head;
    *head = newNode;
  } else {
    q->next = newNode;
    newNode->next = p;
  }
}

Node *insertBegin(Node *head, int data) {
  if (head == NULL) {
    head = createNode(data);
  } else {
    Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
  }
  return head;
}

Node *insertEnd(Node *head, int data) {
  if (head == NULL) {
    head = createNode(data);
  } else {
    Node *p = head;
    while (p->next != NULL)
      p = p->next;
    p->next = createNode(data);
  }
  return head;
}

Node *findKey(Node *head, int key) {
  Node *p = head;
  while (p != NULL && p->data != key)
    p = p->next;
  return p;
}

Node *deleteNode(Node *head, int key) {
  if (head == NULL) {
    printf("List is empty\n");
    return head;
  }
  Node *p = head, *q = NULL;

  while (p != NULL && p->data != key) {
    q = p;
    p = p->next;
  }

  if (p == NULL) {
    printf("Key not found\n");
    return head;
  }
  if (p == head)
    head = head->next;
  else
    q->next = p->next;

  free(p);
  return head;
}

Node *reverseList(Node *head) {
  Node *prev = NULL, *curr = head, *next = NULL;
  while (curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

void display(Node *head) {
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }
  Node *p = head;
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

void freeList(Node *head) {
  Node *p = head, *q = NULL;
  while (p != NULL) {
    q = p;
    p = p->next;
    free(q);
  }
}

int main() {
  Node *head = NULL;
  int choice, data, key;

  while (1) {
    printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert after a "
           "key\n4.Insert before a key\n");
    printf("5.Delete a key\n6.Find a key\n7.Display list\n8.Reverse "
           "list\n9.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter data: ");
      scanf("%d", &data);
      head = insertBegin(head, data);
      break;
    case 2:
      printf("Enter data: ");
      scanf("%d", &data);
      head = insertEnd(head, data);
      break;
    case 3:
      printf("Enter data and key: ");
      scanf("%d%d", &data, &key);
      insertAfter(head, data, key);
      break;
    case 4:
      printf("Enter data and key: ");
      scanf("%d%d", &data, &key);
      insertBefore(&head, data, key);
      break;
    case 5:
      printf("Enter key: ");
      scanf("%d", &key);
      head = deleteNode(head, key);
      break;
    case 6:
      printf("Enter key: ");
      scanf("%d", &key);
      Node *foundNode = findKey(head, key);
      if (foundNode != NULL) {
        printf("Key found: %d\n", foundNode->data);
      } else {
        printf("Key not found\n");
      }
      break;
    case 7:
      display(head);
      break;
    case 8:
      head = reverseList(head);
      break;
    case 9:
      freeList(head);
      exit(0);
    default:
      printf("Invalid choice\n");
    }
  }

  return 0;
}