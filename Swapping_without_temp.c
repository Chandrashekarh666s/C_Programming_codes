#include<stdio.h>
int main(){
int a,b;
printf("Enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("Befor swapping a=%d and b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After Swapping a=%d and b=%d\n",a,b);
return 0;
}
