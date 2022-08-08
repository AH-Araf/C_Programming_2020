#include<stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    if(letter>='a' && letter<='z'){
        printf("%c is lower case.\n",letter);
    }
    else if(letter>='A' && letter<='Z'){
        printf("%c is upper case.\n",letter);
    }
    return 0;
}
