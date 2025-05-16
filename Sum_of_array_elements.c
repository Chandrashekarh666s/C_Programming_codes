#include<stdio.h>
int main(){
int n,i,arr[n],sum=0;
printf("Enter the length of the array") ;
scanf("%d",&n);
printf("Enter the element\n");
for(i=0;i<n;i++){
scanf("%d",&arr[n]);
sum+=arr[n];   
}
printf("%d",sum);
return 0;
}
