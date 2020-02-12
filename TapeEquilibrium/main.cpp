#include <limits>
using namespace std;
int solution(vector<int> &A) { // got 84% pass rate
    // write your code in C++14 (g++ 6.2.0)
    int s = 0;
    int m = std::numeric_limits<int>::max();
    int left_sum = 0;
    
    for(int i = 0; i < A.size(); i++)
        s += A[i];
    
    
    for (int i = 0; i < A.size(); i++){
        left_sum += A[i];
        m = min(m,abs(s-2*left_sum));
    }
    
    return m;
    
}
