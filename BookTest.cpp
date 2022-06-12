#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
    /* data */
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};


int main(){

    Books book1;
    Books book2;

    strcpy(book1.title, "c++教程");
    strcpy(book1.author, "裴海涛");
    strcpy(book1.subject, "教程");
    book1.book_id = 1;

    strcpy(book1.title, "Java教程");
    strcpy(book1.author, "朱斯雅");
    strcpy(book1.subject, "教程");
    book1.book_id = 2;


    cout << "第一本书标题 : " << book1.title <<endl;
   cout << "第一本书作者 : " << book1.author <<endl;
   cout << "第一本书类目 : " << book1.subject <<endl;
   cout << "第一本书 ID : " << book1.book_id <<endl;

   cout << "第二本书标题 : " << book2.title <<endl;
   cout << "第二本书作者 : " << book2.author <<endl;
   cout << "第二本书类目 : " << book2.subject <<endl;
   cout << "第二本书 ID : " << book2.book_id <<endl;

   return 0;
}


