//stack operations of push,pop,peek
#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

// Push operation
void push() {
    int value;

    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter the value: ");
        scanf("%d", &value);
        stack[++top] = value;
        printf("Element pushed successfully\n");
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top--]);
    }
}

// Peek operation
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

int main() {
    int choice;

    do {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
