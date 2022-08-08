#include<stdio.h>
int main(){
    typedef float Distance;
    Distance miles;
    printf("Enter the distance in Miles\n");
    scanf("%f",&miles);
    printf("Kilometer=%fkm\n",1.6*miles);
    printf("Enter the distane in Meters\n");
    scanf("%f",&miles);
    printf("Meter=%fm\n",1609.344*miles);
    return 0;
}
