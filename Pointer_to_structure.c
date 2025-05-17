#include <stdio.h>

struct Student {
    int roll_no;
    char name[20];
};

int main() {
    struct Student s1 = {101, "Alice"};
    struct Student *ptr = &s1;

    printf("Using -> operator:\n");
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);

    printf("\nUsing (*ptr). notation:\n");
    printf("Roll Number: %d\n", (*ptr).roll_no);
    printf("Name: %s\n", (*ptr).name);

    return 0;
}
