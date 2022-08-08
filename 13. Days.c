#include<stdio.h>
int main(){
    int idays,month,odays;
    printf("Enter days:\n");
    scanf("%d",&idays);
    month=idays/30;
    odays=idays%30;
    printf("%dMonth %dDays\n",month,odays);
    return 0;
}
