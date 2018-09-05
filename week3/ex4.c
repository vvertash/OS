#include<stdio.h> 
  
// procedure swap which changes elements
void swap(int* x, int* y) { 
    int z = *x; 
    *x = *y; 
    *y = z; 
} 

// function partition for quicksort algorithm
int partition (int a[], int left, int right) { 
    int pivot = a[right];
    int i = left - 1; 
    for (int j = left; j <= right - 1; j++) { 
        if (a[j] <= pivot) { 
            i++;
            swap(&a[i], &a[j]); 
        } 
    } 
    swap(&a[i + 1], &a[right]); 
    return i + 1; 
} 
  
// quicksort algorithm for sorting elements in an array
void quick_sort(int a[], int left, int right) { 
    if (left < right) { 
        int pivot = partition(a, left, right); 
        quick_sort(a, left, pivot - 1); 
        quick_sort(a, pivot + 1, right); 
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
    // sorting elements of an array using quicksort algorithm
    quick_sort(a, 0, n - 1); 
    // printing elements of sorting array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); 
    }
    return 0; 
} 