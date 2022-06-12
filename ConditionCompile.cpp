#include <iostream>
#define NOTES
using namespace std;
int main() {
    int x, y, z, area;
    x = 1;
    y = 2;
    z = 3;
    #ifdef NOTES
    cout << "value is :" << x << y << z << endl; 
    #endif

    area = x*y*z;
    cout << "area are :" << area << endl;
    return 0;
}
