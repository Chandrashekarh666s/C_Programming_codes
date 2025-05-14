#include <stdio.h>
int main(){
int num;
printf("Enter the value of num\n");
scanf("%d",&num);
if(num>=10&&num<=100){
    printf("The Entered Number %d is within the range of 10 to 100\n");
}
else{
    printf("The Entered Number %d is not within the range of 10 to 100\n");
}
return 0;}
