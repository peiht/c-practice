#include <stdio.h>

// 字符串做替换
#define named(y) printf("the value is %s", #y)
#define PSQR(x) printf("the square of " #x " is : %d.\n", (x)*(x))

int main(){
    int x = 2;
    PSQR(x);
    PSQR(2 + 4);
    
    named(y);
    return 0;
}
