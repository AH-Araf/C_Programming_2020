#include<stdio.h>
int main(){
    int num,temp;
    printf("Enter Number:\n");
    scanf("%d",&num);
    if(num>=33){
        temp=num/10;
    }
    else{
        temp=2;
    }
    switch(temp){
    case'10':
    case'9':
    case'8':
        printf("A+");
        break;
    case'7':
        printf("A");
        break;
    case'6':
        printf("A-");
        break;
    case'5':
        printf("B");
        break;
    case'4':
        printf("C");
        break;
    case'3':
        printf("D");
        break;
    case'2':
        printf("F");
        break;

    }
    return 0;
}
