#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}


void insertMiddle(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    
    if (*head == NULL || (*head)->next == NULL) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *slow = *head, *fast = (*head)->next;

    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    
    newNode->next = slow->next;
    slow->next = newNode;
}


void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Original List:\n");
    printList(head);

    
    insertMiddle(&head, 99);

    printf("After inserting 99 in middle:\n");
    printList(head);

    return 0;
}