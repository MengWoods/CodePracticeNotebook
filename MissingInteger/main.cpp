#include <iostream>
#include <vector>
#include <limits>

#include <unordered_map>

using namespace std;



vector<int> A ={1,3,6,4,1,2};

int solution(vector<int> A);

int main(){
    int b = solution(A);
    //int b = 1;
    cout<<b<<endl;
}


int solution(vector<int> A) {  // 100%
    unordered_map<int, int> map;
    
    for(int i = 0; i < int (A.size()); i++){
        if (A[i]>0)
            map[A[i]] = i;
    }
    
    for (int i=1; i<int(map.size() + 1); i++){
        if (map.find(i)==map.end()) return i;
    }
    return int(map.size() + 1);
    
}

int solution1(vector<int> A){
    vector<bool> hashTable(A.size());
    if(A.size() == 1){
        if(A[0]==1)
            return 2;
        else
            return 1;
    }
    
    for(int i=0; i<A.size(); i++){
        long long int val = A[i];
        
        if(val > 0 && val <= A.size())
            hashTable[val - 1] = true;
    }

    return 0
}




int solution(vector<int> A){
    
    int s = A.size();
    double inf = numeric_limits<double>::infinity();
    long int max = -inf;
    
    for (int i = 0; i<s; i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    if (max <= 0){
        return 1;
    }
    else{
        return max+1.;
    }
    
}



