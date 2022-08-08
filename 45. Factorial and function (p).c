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
    else if(x==0)
        return(c);
}

int main(void){
    int n;
    unsigned long long int m;
    printf("Enter Value: ");
    scanf("%d",&n);
    m=factorial(n);
    if(n>=0)
    printf("%llu\n",m);
    else
    printf("Math Error");
    return 0;
}
