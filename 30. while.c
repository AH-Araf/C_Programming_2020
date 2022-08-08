#include<stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    if(count>=10 && count<=20){
        while(count<=30){
            printf("%d\n",count);
            count++;
        }
    }
    else{
        printf("wrong input\n");
    }
    return 0;
}
