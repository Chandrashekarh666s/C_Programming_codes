#include <stdio.h>

int main() {
int age;
printf("Enter the value of age ");
scanf("%d",&age);
if(age>18){
    if(age<30){
        printf("Your are young adult");
    }
    printf("you are old");
}
    return 0;
}
