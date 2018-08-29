#include <stdio.h>



void sw(int *a, int *b) {
    
    int c = *a;
    
    *a = *b;
    
    *b = c;

}



int main() {
   
    int a, b;
    
    scanf("%i", &a);
    
    scanf("%i", &b);
    
    sw(&a, &b);
    
    printf("%i", a);
    
    printf("%c", ' ');
    
    printf("%i", b);

}