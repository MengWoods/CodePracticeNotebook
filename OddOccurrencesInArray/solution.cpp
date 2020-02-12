#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int missing = 0;
    for (int i=0; i<A.size(); i++){
        missing ^= A[i]; // XOR will nullify pairs
    }
    return missing;

}
