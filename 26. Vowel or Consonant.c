#include<stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||
       letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
        printf("%c is a vowel\n",letter);
    }
    else{
        printf("%c is a consonant\n",letter);
    }
    return 0;
}
