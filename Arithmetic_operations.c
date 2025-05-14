#include<stdio.h>
int main(){
int a,b,sum,difference,product;
float quotient;
printf("Enter the values of a and b:\n");
scanf("%d%d",&a,&b);
printf("The sum is %d\n",sum=a+b);
printf("The difference is %d\n",difference=a-b);
printf("The product is %d\n",product=a*b);
printf("The quotient is %.3f\n",quotient=a/b);
return 0;
}
