#include <iostream>

using namespace std;

void foo(int v){
    v = 2;
}

void passByReference(int& v){
    v = 3;
}

void passByConstReference(const int& v) {
    //v不能再次被赋值
    cout << "v value is :" << v <<endl;
}

int main(){
    int a = 1;
    foo(a);
    cout << "a value is :" << a << endl;

    passByReference(a);
    cout << "pass by reference a is :" << a << endl;
    passByConstReference(a);
    cout << "pass by const reference a is :" << a << endl;


}