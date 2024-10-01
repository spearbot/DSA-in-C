#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int search) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            return i; // Return the index where element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n, search, arr[30];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to find: ");
    scanf("%d", &search);

    // Call linearSearch function to search for 'search' in 'arr'
    int index = linearSearch(arr, n, search);

    if (index != -1)
        printf("%d found at location %d\n", search, index);
    else
        printf("%d is not present in the list\n", search);

    return 0;
}

