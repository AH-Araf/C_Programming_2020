#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
char findprime(int);
int main(void){
    int a;
    char m;
    printf("Enter the number: ");
    scanf("%d",&a);
    m=findprime(a);
    if(m=='p')
        printf("Prime");
    else if(m=='n')
        printf("Not prime");
}

char findprime(int x)
{
    int i,flag=0;
    if(x==1 || x==0)
        return'n';
    else{
    for(i=2;i<x;i++){
        if((x%i)==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 'p';
    else
        return 'n';
    }
}
