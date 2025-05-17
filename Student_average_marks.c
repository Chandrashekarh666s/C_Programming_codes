#include<stdio.h>
int i;
struct student {
char name[30];
int roll_no;
float marks;
};
int main(){
struct student std[2];
float total_marks=0.0,average;
for(i=0;i<2;i++){
    printf("Enter the Name of the student:");
    scanf("%s",&std[i].name);
    printf("Enter the Roll Number of the student:");
    scanf("%d",&std[i].roll_no);
    printf("Enter the Marks of the student :");
    scanf("%f",&std[i].marks);
    total_marks+=std[i].marks;
}
average=total_marks/2;
printf("The average marks of 2 students is:%.2f",average);
return 0;

}
