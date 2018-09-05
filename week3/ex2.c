#include <stdio.h>

// procedure swap which changes elements
void swap(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}
 
// bubble sort algorithm for sorting elements in an array
void bubble_sort(int a[], int n) {
   for (int i = 0; i < n - 1; i++) {  
       for (int j = 0; j < n - i - 1; j++) { 
           if (a[j] > a[j + 1])
              swap(&a[j], &a[j + 1]);
       }
   }
}

int main() {
    int a[300];
    int n;
    // reading quantity of elements in an array
    scanf("%d", &n);
    // reading an array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // sorting elements of an array using bubble sort algorithm
    bubble_sort(a, n);
    // printing elements of sorting array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}