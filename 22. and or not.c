#include<stdio.h>
int main(){
    int a,b,c,d,idk,jdk,kdk,ldk,mdk;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    idk= a==b && c==d;/*&&=and,||=or,!=not*/
    jdk= a==b && c!=d;//age not er kaj,thn and,or
    kdk= a==b || c==d;
    ldk= a==b || c!=d;
    mdk= !(a==b);
    printf("Ans=%d\n",idk);
    printf("Ans=%d\n",jdk);
    printf("Ans=%d\n",kdk);
    printf("Ans=%d\n",ldk);
    printf("Ans=%d\n",mdk);
    return 0;
}
