#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertAfter(struct Node* prev, int data) {
    if (prev == NULL) return;
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = prev->next;
    newNode->prev = prev;
    if (prev->next != NULL) prev->next->prev = newNode;
    prev->next = newNode;
}

void deleteNode(struct Node** head, struct Node* del) {
    if (*head == NULL || del == NULL) return;
    if (*head == del) *head = del->next;
    if (del->next != NULL) del->next->prev = del->prev;
    if (del->prev != NULL) del->prev->next = del->next;
    free(del);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;

    insertAfter(head, 20);
    insertAfter(head->next, 30);

    deleteNode(&head, head->next);
    printList(head);
    return 0;
}
