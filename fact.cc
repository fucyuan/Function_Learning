// fact.cc
#include "Chapter6.h"

// 阶乘函数的定义
int fact(int i) {
    if (i <= 1) {
        return 1;
    } else {
        return i * fact(i - 1);
    }
}
