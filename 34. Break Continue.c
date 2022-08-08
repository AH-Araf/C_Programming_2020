#include<stdio.h>
int main(){
    int a=1,b=0;
    for(b;b<=10;b++){
        printf("for brk= %d\n\n",b);
        break;
        printf("Green\n");
    }
    while(a<=10){
        printf("%d\n",a);
        a++;
        continue;
        printf("Red\n");
        ++a;
    }
}
