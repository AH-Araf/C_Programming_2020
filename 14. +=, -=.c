#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("The previous value of 'a' is %d\n",a);
    printf("The new value of 'a' is %d\n",a+=5);
    scanf("%d",&a);
    printf("The previous value of 'a' is %d\n",a);
    printf("The new value of 'a' is %d\n",a-=5);
    scanf("%d",&a);
    printf("The previous value of 'a' is %d\n",a);
    printf("The new value of 'a' is %d\n",a*=5);
    scanf("%d",&a);
    printf("The previous value of 'a' is %d\n",a);
    printf("The new value of 'a' is %d\n",a/=5);
    return 0;
}

