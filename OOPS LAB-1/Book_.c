
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter ID Title Author Price: ");
    scanf("%d %s %s %f",&b.id,b.title,b.author,&b.price);

    printf("\nBook ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f",
           b.id,b.title,b.author,b.price);

    return 0;
}