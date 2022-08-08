#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
}s[];

int main(){
    int r,z;
    printf("Enter The Number of Students: ");
    scanf("%d",&z);
    printf("Enter Information of Students:\n");

    for(r=0;r<z;++r){
        s[r].roll =r+1;
        printf("\nFor Roll Number%d,\n",s[r].roll);
        printf("Enter first name: ");
        scanf("%s",s[r].firstName);
        printf("Enter marks: ");
        scanf("%f",&s[r].marks);
    }
    printf("Here Students Information:\n");

    for (r=0;r<z;++r) {
        printf("\nRoll number: %d\n",r+1);
        printf("First name: ");
        puts(s[r].firstName);
        printf("Marks: %.1f", s[r].marks);
        printf("\n");
    }
    return 0;
}
