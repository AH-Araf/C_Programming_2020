#include<stdio.h>
int main(){
    int a=5,b=9,c=3,i,j,k;
    i=a++;
    printf("%d\n",i);
    i=++a;
    printf("%d\n",i);
    j=--b;
    printf("%d\n",j);
    j=b--;
    printf("%d\n",b);
    return 0;

}
