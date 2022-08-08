#include <stdio.h>
float calculateSum(float num[]);

int main(){
  float result,num[100];
  int n,i;
  printf("Enter the number of elements (0-100): ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&num[i]);
    }
  result = calculateSum(num);
  printf("Result = %.2f", result);
  return 0;
}

float calculateSum(float num[100],int *n) {
  float sum = 0.0;
  for (int i=0;i<n;++i) {
    sum=sum+num[i];
  }

  return sum;
}
