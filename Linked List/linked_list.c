#include <stdio.h>
#include <stdlib.h>  // For malloc and free functions

// Define the structure for a linked list node
struct Node {
    int data;            // Integer data to store in the node
    struct Node *next;   // Pointer to the next node
};

// Function to traverse the linked list and print each node's data
void traverse(struct Node *ptr) {
    while (ptr != NULL) {          // Loop until the end of the list
        printf("%d\n", ptr->data); // Print the current node's data
        ptr = ptr->next;           // Move to the next node
    }
}

int main(void) {
    // Declare pointers for three nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for each node using malloc
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 89;       // Assign data to first node
    head->next = second;   // Link first node to second

    second->data = 67;
    second->next = third;

    third->data = 56;      
    third->next = NULL;    // Last node points to NULL

    // Call the function to traverse and print the list
    traverse(head);

    // Free the allocated memory (good practice)
    free(head);
    free(second);
    free(third);

    return 0;
}
