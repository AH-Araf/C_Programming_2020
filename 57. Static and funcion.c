#include<stdio.h>
int f();
int f1();
int main(){
    int a;
    for(a=0;a<3;a++){
        printf("normal=%d\t",f());
        printf("static=%d\n",f1());
        printf("\n");
    }
    return 0;
}
static int c; //can use outside function, default value is 1
int f(){
    int b=0;
    b++;
    return b;
}
int f1(){

    c++;
    return c;
}

