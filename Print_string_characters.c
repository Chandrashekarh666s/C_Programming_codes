#include <stdio.h>
 void printCharacters (char str[]) {
for (int i = 0; str[i] != '\0'; i++) 
printf("Character at index %d: %c\n",
i, str[i]);
}
 int main() {
char input [100];
printf("Enter a string: ");
scanf("%s", input);
printCharacters(input);
return 0;
}
