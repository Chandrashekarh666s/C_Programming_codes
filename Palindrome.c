include <stdio.h>
int main(){
    int num,reversed=0,rem,original;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    original=num;
    while(num!=0){
    rem = num%10;
    reversed =reversed*10 + rem;
    num/=10;
    }
    if (reversed==original){
        printf("the number is palindrome");
    }
    else{
        printf("Not palindrome");
        }
        return 0;
    }
