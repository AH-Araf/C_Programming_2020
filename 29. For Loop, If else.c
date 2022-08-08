#include<stdio.h>
int main(){
int i,count,tamp;
scanf("%d",&tamp);
if(tamp>=0 && tamp<=100){
   count=tamp*2;
for(i=count;i<=100;i=i+1){
    printf("Answer=%d\n",i);
}
}
else{
    printf("Wrong input\n");
}
return 0;
}
