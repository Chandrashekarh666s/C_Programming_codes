#include <stdio.h>
int main(){
float a,b,c;
char sign;
printf(" Enter the sign to perform Calculation(+,-,*,/)\n");
scanf("%c",&sign);
printf("Enter the values of a and b\n");
scanf("%f%f",&a,&b);
if(sign=='+'){
c=a+b;
printf("Result=%f",c);
}
else if(sign=='-'){
c=a-b;
printf("Result=%f",c);
}
 else if(sign=='*'){
c=a*b;
printf("Result=%f",c);
}
else if(sign=='/'){
if(b!=0){
c=a/b;
printf("Result=%f",c);
}
else{
    printf("Division is not possible\n");
}
}else
printf("Enter the proper sign for performing operation");
return 0;}
