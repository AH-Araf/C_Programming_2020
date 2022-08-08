#include<stdio.h>
void f1(int,float*);//prototype
int main(){
    int a=10;
    float b=20.50;
    printf("Before f.call a=%d, b=%.2f\n",a,b);
    f1(a,&b);//'a' send in value & 'b' send in reference
    printf("After f.call a=%d, b=%.2f\n",a,b);
    return 0;
}

void f1(int a,float *b){
    //'a' receive in value & 'b' receive in reference
    a=100;
    *b=100.50;
    return 0;
}

