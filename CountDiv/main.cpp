Write a function:

int solution(int A, int B, int K);

that, given three integers A, B and K, returns the number of integers within the range [A..B] that are divisible by K, i.e.:

{ i : A ≤ i ≤ B, i mod K = 0 }

For example, for A = 6, B = 11 and K = 2, your function should return 3, because there are three numbers divisible by 2 within the range [6..11], namely 6, 8 and 10.

Write an efficient algorithm for the following assumptions:

A and B are integers within the range [0..2,000,000,000];
K is an integer within the range [1..2,000,000,000];
A ≤ B.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int solution(int A, int B, int K){ // time consuming
    int n = 0;
    //int i = B - A;
    if(A>B){
        cout << "wrong A, B input" <<endl;
    }
    else if (A==B){
        n =  (A%K == 0) ? 1 : 0;
    }
    else{
        for (int i = A; i<=B ; i++){
            if (i%K==0) {n++;}
        }
    }
    return n;
}

int solution1(int A, int B, int K){   //37%
    int n = 0;
    //int i = B - A;
    if (A==B){
        n =  (A%K == 0) ? 1 : 0;
    }
    else{
        for (int i = A; i%K==0 && i<=B ; i++){
            if (i%K==0) {
                n = floor((B - i)/K) + 1;
            }
        }
    }
    return n;
}

int main(){
    int A = 6;
    int B = 11;
    int K = 2;
    int n = solution1(A,B,K);
    
    cout<<"n="<< n << endl;
}
