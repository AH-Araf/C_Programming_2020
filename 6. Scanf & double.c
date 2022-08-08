#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Sum is %0.4lf\n",a+b+c);
    printf("Minus is %lf\n",a-b-c);
    printf("Multiply is %lf\n",a*b*c);
    printf("Division is %0.2lf\n",a/b/c);
    return 0;
}
