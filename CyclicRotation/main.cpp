
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
