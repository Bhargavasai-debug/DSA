//circular queue using c
#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue() {
    int value;

    if ((rear + 1) % MAX == front) {
        printf("Circular Queue Overflow\n");
    } else {
        printf("Enter the value: ");
        scanf("%d", &value);

        if (front == -1)
            front = 0;

        rear = (rear + 1) % MAX;
        queue[rear] = value;

        printf("Element inserted successfully\n");
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1) {
        printf("Circular Queue Underflow\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Display operation
void display() {
    int i;

    if (front == -1) {
        printf("Circular Queue is empty\n");
    } else {
        printf("Queue elements: ");
        i = front;

        while (1) {
            printf("%d ", queue[i]);

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Circular Queue ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
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
