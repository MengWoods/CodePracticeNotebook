#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==0) return A;
    K = K%A.size();
    if(K==0) return A;
    
    vector<int> res(A.size());
    
    for (int i = 0; i<A.size(); i++){
        res[(i+K)%(A.size())] = A[i];
    }
    return res;
}

int main() {
    // insert code here...
    
    //int *p ;
    vector<int> A{1,2,3,4,5};
    int K = 1;
    
    //int B[sizeof(A)] = {0};
    vector<int> res = solution(A,K);
    
    for (int i=0; i<res.size();i++){
        cout<<res[i]<<',';
    }
    
    return 0;
}
