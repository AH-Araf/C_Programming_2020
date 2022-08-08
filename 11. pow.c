#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,powerA,powerB;
    scanf("%f%f",&a,&b);
    powerA=pow(a,b);
    printf("Two power=%f\n",powerA);
    scanf("%f%f%f",&a,&b,&c);
    powerB=pow(pow(a,b),c);
    printf("Three power=%f\n",powerB);
    return 0;
}
