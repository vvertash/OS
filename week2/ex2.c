#include<stdio.h>
#include <string.h>

int main() {
   char s[1000];
   scanf("%s", &s);
   for (int i = strlen(s) - 1; i >= 0; i--) {
       printf("%c", s[i]);
   }
}