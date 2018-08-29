#include<stdio.h>
#include <limits.h>
#include <float.h>

int main() {
   int x = INT_MAX;
   double y = DBL_MAX;
   float z = FLT_MAX;
   printf("%i\n", x);
   printf("%lf\n", y);
   printf("%f\n", z);
   int a = sizeof(x), b = sizeof(y), c = sizeof(z);
   printf("%i\n", a);
   printf("%i\n", b);
   printf("%i", c);
}