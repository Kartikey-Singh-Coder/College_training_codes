#include <stdio.h>

#define MAX_SIZE 100

void display(int arr[], int n) {
    if (n == 0) {
        printf("\nArray is empty!\n");
        return;
    }

    printf("\nARRAY: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertBeginning(int arr[], int *n) {
    if (*n >= MAX_SIZE) {
        printf("Array is full!\n");
        return;
    }

    int element;
    printf("Enter the new element: ");
    scanf("%d", &element);

    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = element;
    (*n)++;

    printf("Element inserted successfully.\n");
    display(arr, *n);
}

void insertEnd(int arr[], int *n) {
    if (*n >= MAX_SIZE) {
        printf("Array is full!\n");
        return;
    }

    int element;
    printf("Enter the new element: ");
    scanf("%d", &element);

    arr[*n] = element;
    (*n)++;

    printf("Element inserted successfully.\n");
    display(arr, *n);
}

void insertPosition(int arr[], int *n) {
    if (*n >= MAX_SIZE) {
        printf("Array is full!\n");
        return;
    }

    int pos, element;

    printf("Enter the position (0 to %d): ", *n);
    scanf("%d", &pos);

    if (pos < 0 || pos > *n) {
        printf("Invalid Position!\n");
        return;
    }

    printf("Enter the new element: ");
    scanf("%d", &element);

    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    (*n)++;

    printf("Element inserted successfully.\n");
    display(arr, *n);
}

void deleteBeginning(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }

    for (int i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;

    printf("Element deleted successfully.\n");
    display(arr, *n);
}

void deleteEnd(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }

    (*n)--;

    printf("Element deleted successfully.\n");
    display(arr, *n);
}

void deletePosition(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }

    int pos;

    printf("Enter the position (0 to %d): ", *n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= *n) {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;

    printf("Element deleted successfully.\n");
    display(arr, *n);
}

int main() {
    int arr[MAX_SIZE];
    int n, choice;

    printf("Enter the size of the array (0-%d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 0 || n > MAX_SIZE) {
        printf("Invalid array size!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n========== ARRAY OPERATIONS ==========\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Specific Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Specific Position\n");
        printf("7. Display Array\n");
        printf("0. Exit\n");
        printf("======================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertBeginning(arr, &n);
                break;

            case 2:
                insertEnd(arr, &n);
                break;

            case 3:
                insertPosition(arr, &n);
                break;

            case 4:
                deleteBeginning(arr, &n);
                break;

            case 5:
                deleteEnd(arr, &n);
                break;

            case 6:
                deletePosition(arr, &n);
                break;

            case 7:
                display(arr, n);
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}