#include <iostream>
#include <vector>
using namespace std;

vector<unsigned int> A={4,1,3,2};
vector<unsigned int> B={4,1,2};

int solution1(vector<int>);

int main(){
    int b = solution1(A);
    cout<< b <<",,," << endl;
}

int solution(vector<unsigned int> A){   // 73 %
    int s = A.size();
    int normal = (1+s)*s/2;
    int check_sum = 0;
    for (int i=0; i<s; i++){
        check_sum += A[i];
    }
    if (check_sum == normal){
        return 1;
    }
    
    return 0;
}

int solution1(vector<int> &A) {   //50%
    // write your code in C++14
    int s = A.size();
    vector<unsigned int> B(s,0);
    for (int i=0; i<s; i++){
        B[A[i]]++;
    }
    for (int i=1; i<s; i++){
        if (B[i+1]==0){
            return 0;
        }
    }
    return 1;
}
