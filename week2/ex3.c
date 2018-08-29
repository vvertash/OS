#include<stdio.h>

int main() {
    int n; 
    scanf("%d",&n);
    int a = n, b = 1;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < a; i++) {
            printf("%c", ' ');
        }
        for (int i = 0; i < b; i++) {
            printf("%c", '*');
        }
        for (int i = 0; i < a; i++) {
            printf("%c", ' ');
        }
        printf("\n", ' ');
        a--;
        b += 2;
    }
}