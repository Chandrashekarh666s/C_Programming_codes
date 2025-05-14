#include <stdio.h>

int main() {
int n,i,n1=0,n2=1,n3;
printf("Enter the length of the fibbonacci sequence generated:");
scanf("%d",&n);
printf("Fibonacci sequence is %d,%d",n1,n2);
for(i=3;i<=n;i++){
    n3=n1+n2;
    printf(",%d",n3);
    n1=n2;
    n2=n3;
    
}
return 0;
}
