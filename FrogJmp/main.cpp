#include <math.h> 
using namespace std;
int solution(int X, int Y, int D) { // 33% pass rate
    // write your code in C++14 (g++ 6.2.0)
    
    return ceil(((float)Y-(float)X)/(float)D);
}



int solution1(int X, int Y, int D) { // 100%
    // write your code in C++14 (g++ 6.2.0)
    
    double jumps = (double)(Y-X) / D;
    
    return ceil(jumps);
}
/*
The double and float types are similar, but they differ in precision and range:

A float is a single precision, 32-bit floating-point data type that accommodates seven digits. 
Its range is approximately 1.5 × 10−45 to 3.4 × 1038.

A double is a double-precision, 64-bit floating-point data type. 
It accommodates 15 to 16 digits, with a range of approximately 5.0 × 10−345 to 1.7 × 10308.
*/
