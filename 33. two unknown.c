#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("Your Serial:\n");
        while(a<=b){
            printf("%d\n",a);
            ++a;
        }
    }
    else{
        printf("Wrong Input\n");
    }
    return 0;
}
