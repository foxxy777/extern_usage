#include "ext.h"//推荐的方法，ext.cpp做定义，ext.h里做extern声明，这样头文件一include就可以用了

extern int b;//蠢方法，只在ext.cpp里面定义，在main要用的时候，先声明一句这个b是从外面来的(extern)，然后再在函数里面用

int main() {
     a = 1;
     b = 1;
    return 0;
}