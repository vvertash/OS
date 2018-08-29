#include<stdio.h>

int first(int n) {
    int a = n, b = 1;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < a; i++) {
            printf("%c", ' ');
        }
        for (int i = 0; i < b; i++) {
            printf("%c", '*');
        }
        for (int i = 0; i < a; i++) {
            printf("%c", ' ');
        }
        printf("\n");
        a--;
        b += 2;
    }
}

int second(int n) {
    int a = 1;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < a; i++) {
            printf("%c", '*');
        }
        printf("\n");
        a++;
    }
}

int third(int n) {
    int a = 1, b = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a; j++) {
            printf("%c", '*');
        }
        printf("\n");
        if (a == n / 2 + n % 2) {
            b = 1;
            if (n % 2 == 0) {
                for (int j = 0; j < a; j++) {
                    printf("%c", '*');
                }
                printf("\n");
            }   
        }
        if (b == 0) a++; else a--;
    }
}

int forth(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", '*');
        }
        printf("\n");
    }
}

int main() {
    int n, numb; 
    scanf("%i", &n);
    scanf("%i", &numb);
    if (numb == 1) first(n);
    if (numb == 2) second(n);
    if (numb == 3) third(n);
    if (numb == 4) forth(n);
}