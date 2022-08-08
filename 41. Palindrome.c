#include<stdio.h>
int main(){
    int numbr,remainder,reversed=0,n;
    printf("Enter Number:");
    scanf("%d",&numbr);
    n=numbr;
    while(numbr != 0){
        remainder=numbr%10;
        reversed=reversed*10+remainder;
        numbr/=10;
    }
    if (n==reversed)
    printf("%Palindrome",n);
    else
        printf("Not Palindrome",n);
    return 0;
}
