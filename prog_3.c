#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void reversePrint(struct Node* head) {
    if (head == NULL) return;
    reversePrint(head->next);
    printf("%d ", head->data);
}

void insert(struct Node** head, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    struct Node* head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    printf("Reverse: ");
    reversePrint(head);
    return 0;
}
