#include <stdio.h>
struct student{
  char name[20];
  char roll_no[15];
  int marks;
};
int main(){
    struct student s;
    printf("Enter your Name:");
    scanf("%s",&s.name);
     printf("Enter your roll number:");
    scanf("%s",&s.roll_no);
     printf("Enter your Marks:");
    scanf("%d",&s.marks);
    
 printf("The Name of the student :%s",s.name);
 printf("\nThe Roll Number of the student :%s",s.roll_no);
 printf("\nThe Marks secured by the student :%d",s.marks);
 return 0;


    
}
