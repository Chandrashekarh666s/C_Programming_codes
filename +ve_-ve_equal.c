#include <stdio.h>

int main() {
int n;
printf("Enter a Number:");
scanf("%d",&n);
if(n==0){
    printf("The Entered Number %d is equal to zero\n");
}
else if(n>0){
    printf("The Entered Number %d is Positive\n");
    
}
else
printf("The Entered Number %d is Negative\n");
    return 0;
}
