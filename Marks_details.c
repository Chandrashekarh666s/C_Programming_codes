#include <stdio.h>

int main() {
int marks;
printf("Enter Your Marks Obtained:");
scanf("%d",&marks);
if(marks>75){
    printf("Disinction\n");
}
else if(marks>=40)
printf("Pass\n");
else
printf("Fail\n");
return 0;
}
