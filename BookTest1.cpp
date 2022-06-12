#include <iostream>
#include <cstring>

using namespace std;
void printBook(struct Book book);

typedef struct Books
{
    /* data */
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Books;

void printBook( struct Books *book){
    cout << "本书标题 : " << book->title <<endl;
    cout << "本书作者 : " << book->author <<endl;
    cout << "本书类目 : " << book->subject <<endl;
    cout << "本书 ID : " << book->book_id <<endl;
}

int main(){

    Books book1;
    Books book2;

    strcpy(book1.title, "c++教程");
    strcpy(book1.author, "裴海涛");
    strcpy(book1.subject, "教程");
    book1.book_id = 1;

    strcpy(book2.title, "Java教程");
    strcpy(book2.author, "朱斯雅");
    strcpy(book2.subject, "教程");
    book2.book_id = 2;


    printBook(&book1);
    printBook(&book2);

   return 0;
}




