#include <stdio.h>

void insertElement(int array[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = element;
    (*size)++;
}

int main() {
    int array[100]; 
    int size = 0;   
    int n, position, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        size++;
    }
    printf("Enter the position to insert the element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    insertElement(array, &size, position, element);
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
