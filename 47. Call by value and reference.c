#include<stdio.h>
void f1(int);
void f2(int *);
int main(){
    int a=10,b=10;
    printf("Value before function call a=%d, b=%d\n",a,b);
    f1(a);  //Call by value
    f2(&b); //Call by referance
    printf("Value after function call a=%d, b=%d\n",a,b);
    return 0;
}

void f1(int a){
    a=20; //will not change in main function
    return 0;
}

void f2(int *b){
    *b=20; //will change in main function
    return 0;
}
