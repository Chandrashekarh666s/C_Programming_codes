a#include <stdio.h>
int main(){
char ch;
printf("Enter any Alphabet");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    printf("Entered Alphabet %c is vowel",ch);
}
else{
    printf("Entered Alphabet %c is consonent",ch);
}
return 0;
}
