#include<stdio.h>

struct Book {
	int book_id;
	int price;
	char title[100];
	char author_name[100];
};


void printBook(struct Book b) {
	printf("Book ID : %d \n", b.book_id);
	printf("Price : %d \n", b.price);
	printf("Title : %s \n", b.title);
	printf("Author Name : %s \n", b.author_name);
}


int main() {
	struct Book b1;
	printf("Enter Book ID : ");
	scanf("%d", &b1.book_id);
	printf("Enter Price : ");
	scanf("%d", &b1.price);
	printf("Enter Title : ");
	scanf("%s", &b1.title);
	printf("Enter Author Name : ");
	scanf("%s", &b1.author_name);
	
	printBook(b1);
	
	return 0;
}
