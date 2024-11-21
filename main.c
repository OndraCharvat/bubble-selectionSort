#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Původní pole: ");
    printArray(arr, n);
    printf("Selection Sort - 1\n");
    printf("Bubble Sort - 2\n");
    printf("Vyberte sort:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        selectionSort(arr, n);
        printf("Selection Sort:\n");
    } else if (choice == 2) {
        bubbleSort(arr, n);
        printf("Bubble Sort:\n");
    } else {
        printf("Nevalidní choice.\n");
    }

    printArray(arr, n);

    return 0;
}
