#include<stdio.h>
int main(){
char lab;
scanf("%c",&lab);
switch(lab){
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
        printf("Vowel=%c\n",lab);
        break;
    default:
        printf("Consonant=%c\n",lab);
    }
    return 0;
}
