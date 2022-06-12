#include <iostream>

using namespace std;

class Box {
    public :
        double width;
        double height;
        double length;

        double get(void);
        //类似定义模板
        void set(double wid, double hei, double len);
};

//类似实现Box的get方法
double Box::get(void) {
    return  width * height * length;
}

void Box::set(double wid, double hei, double len) {
    width = wid;
    height = hei;
    length = len;
}

int main(){

    Box box1;
    box1.set(1.0, 2.0, 3.0);
    double volume = box1.get();
    cout << "volume : " << volume << endl;
    return 0;
}