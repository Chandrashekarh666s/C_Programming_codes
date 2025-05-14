#include <stdio.h>
int main(){
int num;
printf("Enter the value of num \n");
scanf("%d",&num);
if(num%3==0&&num%5==0){
    printf("The Number %d is diavisible by 3 and 5\n");
}
else{
    printf("The Number %d is  not divisible by 3 and 5\n");
}
return 0;
}
