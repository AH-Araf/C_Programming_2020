#include<stdio.h>
void fx(int B[3][2]);
int main(){
    int arr[3][2]={{10,20},{40,50},{70,80}};
    fx(arr);
    printf("%d\n",arr[2][1]);
    return 0;
}
void fx(int B[3][2]){
    int row,col;
    for(row=0;row<3;row++){
        for(col=0;col<2;col++){
            printf("arr[%d][%d]=%d",row,col,B[row][col]);
            printf("\n");
        }
    }
return 0;
}
