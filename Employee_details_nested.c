#include<stdio.h>
struct Address{
 char city[20];
 int pin;
};
struct employee{
  char name[20];
  int id;
  struct Address ads;
};
int main(){
    int i;
    struct employee emp;
for(i=0;i<2 ;i++){
    printf("\n Employee:%d\n",i+1);
    printf("Enter the Name of the Employee:");
    scanf("%s",&emp.name);
    printf("Enter the Id:");
    scanf("%d",&emp.id);
    printf("Enter the City:");
    scanf("%s",&emp.ads.city);
    printf("Enter the city pin no:");
    scanf("%d",&emp.ads.pin);
}
for(i=0;i<2;i++){
printf("The name of the Employee: %s",emp.name);
printf("The Id no of the Employee:%d\n",emp.id);
printf("The Name of the city: %s\n",emp.ads.city);
printf("The pin the mentined city : %d\n",emp.ads.pin);
}
    return 0;
}
