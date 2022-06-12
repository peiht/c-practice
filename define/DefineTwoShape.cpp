#include <stdio.h>

//XNAME(1) = X1
//x##n = x1 = 12
//PXN(1) printf(x1=12)
#define XNAME(n) x##n
#define PXN(n) printf("x"#n"=%d\n", x##n)


int main(){
    int XNAME(1) = 12;
    PXN(1);
    return 0;
}