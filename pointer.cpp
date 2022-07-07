#include <iostream>

using namespace std;

void reference(){
    int i;
    int& r = i;

    i = 1;

    cout << "original val : " << i << endl;
    cout << "reference val : " << r << endl;

    i = 2;

    cout << "after modify :" << r << endl;
}


int main(){

    int var1 = 0;

    cout << var1 << endl;
    cout << &var1 << endl;
    int *p = &var1;
    //*p 指向的还是var1所在的内存地址
    cout << p << endl;

    // 定义变量指向var1的内存地址，则解析出来的变量就是var1定义的值
    int p1 = *p;
    cout << p1 << endl;


    reference();
    return 0;
}
