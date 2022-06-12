#include <iostream>

using namespace std;

class Shape {
    protected:
        int width, height;
    
    public:
        Shape (int a = 0, int b = 0) {
            width = a;
            height = b;
        }
        //virtual 修饰的方法叫虚函数
        //virtual int getArea() = 0; 叫做纯虚函数
        //virtual修饰的父类方法，在子类重载方法之后，调用子类的方法就会调用子类的方法， 不然就会调用父类的方法
        virtual int getArea(){
            cout << "parent class area" << endl;
            return 0;
        }
};

class Rectangle: public Shape{
    public:
        Rectangle(int a = 0, int b = 0): Shape(a, b){

        }
        int getArea(){
            cout << "rectangle area is ： " << endl;
            return width*height;
        }
};

class Triangle: public Shape  {
    public :
        Triangle(int a = 0, int b = 0): Shape(a, b) {

        }

        int getArea(){
            cout << "triangle area is :" << endl;
            return (width*height)/2;
        }
};

int main(){
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10,7);

    shape = &rec;
    shape -> getArea();

    shape = &tri;
    shape -> getArea();

    return 0;
}