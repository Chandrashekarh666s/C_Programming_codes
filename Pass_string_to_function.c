#include <stdio.h>


void printCharacters(char str[]) {
    int i = 0;
    printf("Characters in the string:\n");
    while(str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    printCharacters(str);  

    return 0;
}
