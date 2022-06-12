#include <iostream>

using namespace std;

//方法重载
class Data{
    public:
        void print(int num) {
            cout << "int num is : " << num << endl;
        }

        void print(double num) {
            cout << "double num is : " << num << endl;
        }
};

class Box {
    public:
        int getVolume(void){
            return this->breadth * this->height * this->width;
        }
        void setHeight(int h) {
            height = h;
        }
        void setWidth(int w) {
            width = w;
        }
        void setBreadth(int b){
            breadth = b;
        }
        //运算符重载 类似于新建一个对象，包含当前对象和传进来的引用
        Box operator+(const Box& b) {
            Box box;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            box.width = this->width + b.width;
            return box;
        }

    private:
        int width;
        int height;
        int breadth;
};

int main(){
    Data data;
    data.print(1);
    data.print(5.9);


    Box box1;
    box1.setWidth(1);
    box1.setBreadth(1);
    box1.setHeight(1);

    Box box2;
    box2.setWidth(2);
    box2.setBreadth(2);
    box2.setHeight(2);

    Box box3;
    box3 = box1 + box2;
    cout << "this box's volume is : " << box3.getVolume() << endl;
    return 0;
}