#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main(){
    double radius,volume;
    printf("Enter radius:\n");
    scanf("%lf",&radius);
    volume=(4*pi*pow(radius,3))/3;
    printf("So volume=%0.4lf\n",volume);
    return 0;
}
