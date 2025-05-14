#include <stdio.h>
int main(){
int year;
printf("Enter the year\n");
scanf("%d",&year);
if(year%4==0&&year%100!=0||year%400==0){
    printf("Entered Year is a Leap year %d\n",year);
}
else{
    printf("Entered Year is not a Leap year %d\n",year);
}
return 0;}
