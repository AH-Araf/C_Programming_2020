#include<stdio.h>
int main(){
    int a;
    printf("Enter the value:\n");
    scanf("%d",&a);
    if(a%2==1){
        do{
            printf("%d\n",a);
            a=a+2;
        }
        while(a<=50);
    }
    else{
        printf("%d is a even number\n",a);
    }
    return 0;
}
