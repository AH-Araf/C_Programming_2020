#include<stdio.h>
int main(){
    int a,b,i,ant[1000];
    printf("Enter your choice: ");
    scanf("%d",&i);
    for(a=0;a<i;a++){
        printf("Enter Your Number: ");
        scanf("%d",&ant[a]);
    }
    b=ant[0];
    for(a=1;a<i;a++){
        if(ant[a]>b){
            b=ant[a];
        printf("Max=%d\n",b);
        }
    }

    return 0;
}
