/*A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:

int solution(int N);

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..2,147,483,647].
Copyright 2009–2020 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.*/
//

# include <iostream>
# include <cmath>
# include <bitset>

using namespace std;


int solution(int N) {
    typedef unsigned int u32;
    u32 iCurrentNumZeroes = 0;
    u32 iMaxNumZeroes = 0;
    bool bStartCounting = false;
    
    while (N) {
        if (1 == (N&1)){
            iMaxNumZeroes = (iCurrentNumZeroes > iMaxNumZeroes) ? iCurrentNumZeroes : iMaxNumZeroes;
            iCurrentNumZeroes = 0;
            bStartCounting = true;
        }
        else{
            if(bStartCounting){iCurrentNumZeroes++;}
        }
        N>>=1;
    }
    
    return iMaxNumZeroes;
    
}

int main(){
    unsigned long long number;
    
    /*string number = "10234";
    int N ;
    cout << "Plz type in your number: " ;
    cin >> N;
    cout << "N=" << N << endl;
    
    string b = bitset<sizeof(N)>(N).to_string();
    cout << "binary = " << b << endl;
    cout << "N&1= " << (N&1) << endl;
    cout << "N>>=1 " << bitset<sizeof(10)>(N>>1) <<endl;
    cout << "N>>=2 " << bitset<sizeof(10)>(N>>2) <<endl;
    cout << "N<<=1 " << bitset<sizeof(10)>(N<<1) <<endl;
    cout << "size of N= " << sizeof(N) << endl;*/
    
    
    //size_t a = count(number.begin(), number.end(), '1');
    
    //cout<< "a=" << a << endl;
    
    cin>>number;
    int gap = solution(number);
    cout<< "gap= " << gap << endl;
}

