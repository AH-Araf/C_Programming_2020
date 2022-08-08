#include <math.h>
#include <stdio.h>
int main(){
   double num1,num2,squareRoot,cubeRoot;
    printf("Enter a number for Square Root: ");
    scanf("%lf", &num1);
    squareRoot = sqrt(num1);
    printf("Square Root of %.2lf =  %.2lf\n", num1, squareRoot);

    printf("Enter a number for Cube Root: ");
    scanf("%lf", &num2);
    cubeRoot = cbrt(num2);
    printf("Cube Root of %.2lf =  %.2lf\n", num2, cubeRoot);

   return 0;
}
