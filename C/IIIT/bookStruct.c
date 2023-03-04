#include <stdio.h>
#include <string.h>
struct bookStruct{
    int book_id;
    char title[128];
    char author_name[128];
    int price;
};
void print_book(struct bookStruct book){
    printf("book_id: %d\ntitle: %s\nauthor_name: %s\nprice: %d\n",book.book_id, book.title, book.author_name, book.price);
}
void main(){
    struct bookStruct morrisMano;

    

    printf("enter book id: ");
    scanf("%d",&morrisMano.book_id);
    printf("enter book title: ");
    scanf("%s",&morrisMano.title);
    printf("enter author name: ");
    scanf("%s",&morrisMano.author_name);
    printf("enter book price: ");
    scanf("%d",&morrisMano.price);
    print_book(morrisMano);
}