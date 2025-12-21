#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;
    float threshold;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);
        printf("Enter author of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].author);
        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &books[i].price);
    }

    printf("Enter price threshold: ");
    scanf("%f", &threshold);

    printf("\nBooks with price above %.2f:\n", threshold);
    for (i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n\n", books[i].price);
        }
    }

    return 0;
}
