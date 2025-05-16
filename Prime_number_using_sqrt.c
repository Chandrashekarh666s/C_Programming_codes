#include<stdio.h>
#include<math.h>
int main(){
int i,num,isprime=1,limit;
printf("Enter a number:");
scanf("%d",&num);
if(num<=1){
    isprime=0;
}
for(i=2;i<=sqrt(num);i++){
    if(num%i==0){
        isprime=0;
        break;
    }
    else{
        isprime=1;
    }
}
if(isprime){
    printf("The Entered number is %d prime",num);
}
else{
    printf("The Entered number is not %d prime",num);
}
return 0;
}
