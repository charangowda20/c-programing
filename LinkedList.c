#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert node at the end
void insertEnd(struct Node **head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Reverse linked list in-place
void reverse(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;     // Save next node
        current->next = prev;     // Reverse the link
        prev = current;           // Move prev forward
        current = next;           // Move current forward
    }

    *head = prev;
}

// Display linked list
void display(struct Node *head)
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printf("Original list:\n");
    display(head);

    reverse(&head);

    printf("Reversed list:\n");
    display(head);

    return 0;
}
