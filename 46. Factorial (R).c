
#include<stdio.h>
unsigned long long int factorial(int x){
    int i;
    unsigned long long int pro=1,c=1;
    if(x>1){
    for(i=1;i<=x;i++){
        pro=pro*i;
        }
        return(pro);
    }
    else
        return(pro);
}

int main(void){
    int n;
    unsigned long long int m;
    printf("Enter Value: ");
    scanf("%d",&n);
    if(n>=0){
    m=factorial(n);
    printf("%llu\n",m);
    }
    else
    printf("Math Error");
    return 0;
}
