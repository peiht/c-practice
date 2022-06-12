#include <iostream> 

using namespace std;

int devision(int x, int y) {
    if (y == 0)
    {
        throw  "division by zero condition";
    }
    return x/y;
    
}
int main(){
    int x = 50, y = 0;
    double z;
    try {
        z = devision(x, y);
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}