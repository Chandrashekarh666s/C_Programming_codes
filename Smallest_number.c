#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c){
    printf("%d is smallest\n",a);
}
else if(b<a && b<c)
printf("%d is smallest\n.",b);
else
printf("%d is smallest\n",c);
return 0;
}
