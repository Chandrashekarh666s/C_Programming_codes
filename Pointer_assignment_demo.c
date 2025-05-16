//What is pointer:Pointer is a variable which stores the address of another variable. Example.
#include<stdio.h>
int main(){
int a=5;
int *ptr=&a;
printf("The value of 'a' before assigning a pointer: %d\n",a);
*ptr=666;
printf("The value of 'a' after assigning a pointer: %d\n",a);

    return 0;
}
