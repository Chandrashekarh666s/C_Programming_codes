#include <stdio.h>
int i,num,isprime=1;
int main() {
printf("Enter the element: ");
scanf("%d",&num);
if(num<=1){
    isprime=0;
}
for(i=2;i<=num/2;i++){
    if(num%2==0){
        isprime=0;
        break;
    }
    else{
        isprime=1;
    }
}
if(isprime){
    printf("Entered number %d is prime number.",num);
}
else{
    printf("Entered number %d is not prime number.",num);
}
    
    return 0;
}
