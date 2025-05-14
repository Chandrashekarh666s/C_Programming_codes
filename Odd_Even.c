#include <stdio.h>

int main() {
int num;
printf("Enter the value of num:\n");
scanf("%d",&num);
if(num%2==0){
    printf("Entered number is Even");
}
else{
    printf("Entered number is Odd");
}
    return 0;
}
