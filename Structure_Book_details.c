#include <stdio.h>


struct Book {
    char title[50];
    char author[30];
    int pages;
    float price;
};

int main() {
    struct Book b;

    
    printf("Enter book title: ");
    fgets(b.title, sizeof(b.title), stdin);

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);

    printf("Enter number of pages: ");
    scanf("%d", &b.pages);

    printf("Enter price: ");
    scanf("%f", &b.price);

    
    printf("\nBook Details:\n");
    printf("Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Pages: %d\n", b.pages);
    printf("Price: %.2f\n", b.price);

    return 0;
}
