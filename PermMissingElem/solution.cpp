int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int N = A.size();
    int missing = N+1;
    for (int i=0; i<N; i++){
        missing = missing ^ A[i] ^ (i+1);
    }
    return missing;   
}
