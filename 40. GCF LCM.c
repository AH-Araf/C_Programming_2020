#include <stdio.h>
void main(){
int num1,num2,gcf,lcm,remainder,numerator,denominator;
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
if(num1>num2){
numerator=num1;
denominator=num2;
}
else{
numerator=num2;
denominator=num1;
}
remainder=numerator%denominator;
while(remainder!=0){
numerator=denominator;
denominator=remainder;
remainder=numerator%denominator;
}
gcf=denominator;
lcm=num1*num2/gcf;
printf("GCF=%d,",gcf);
printf("LCM=%d\n",lcm);
}
