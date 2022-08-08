#include<stdio.h>
int main(){
    int i,x[5];
    for(i=0;i<5;i++){
        printf("\nEnter The Value Of x: ");
        scanf("%d",&x[i]);
    }
    printf("%d\n",x[0]+x[3]);
    return 0;
}
