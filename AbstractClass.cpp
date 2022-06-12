#include <iostream>

using namespace std;

class Shape{
    public:
        virtual int getArea() = 0;
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }

    protected:
        int width;
        int height;
};

class Rectangle: public Shape{
    public:
        int getArea(){
            return width*height;
        }
};

class Triangle: public Shape{
    public:
        int getArea(){
            return (width*height)/2;
        }
};

int main(){
    Rectangle rect;
    Triangle tri;
    
    rect.setHeight(3);
    rect.setWidth(10);
    cout << "rectangle area is :" << rect.getArea() << endl;
    
    tri.setHeight(3);
    tri.setWidth(10);
    cout << "triangle area is :" << tri.getArea() << endl;
    return 0;
}
