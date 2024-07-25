#include <stdio.h>

// Function declarations
void insertLeft(int *arr, int *size, int numberToAdd);
void insertRight(int *arr, int *size, int numberToAdd);

void insertLeft(int *arr, int *size, int numberToAdd) {
    for (int i = *size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = numberToAdd;
    (*size)++;
}

void insertRight(int *arr, int *size, int numberToAdd) {
    arr[*size] = numberToAdd;
    (*size)++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5; // Initial size of the array
    int numberToAdd;

    while (1) {
        printf("ENTER 1 to add to beginning\nENTER 2 to add to end\nENTER 3 to print list\nENTER 4 to exit\n");
        int ex;
        scanf("%d", &ex);

        switch (ex) {
            case 1:
                printf("Enter number to add to the beginning: ");
                scanf("%d", &numberToAdd);
                insertLeft(arr, &size, numberToAdd);
                break;
            case 2:
                printf("Enter number to add to the end: ");
                scanf("%d", &numberToAdd);
                insertRight(arr, &size, numberToAdd);
                break;
            case 3:
                printf("Current list: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid option\n");
                break;
        }
    }

    return 0;
}
