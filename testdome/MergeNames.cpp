// Implement the unique_names method. When passed two vectors of names, it will return a vector
// containing the names that appear in either or both vectors. The returned vector should have no duplicates.
// For example, calling MergeNames::unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"},
// std::vector<std::string>{"Olivia", "Sophia", "Emma"}) should return a vector containing Ava, Emma, Olivia, and Sophia in any order.
// https://www.testdome.com/questions/cpp/merge-names/21511

#include <iostream>
#include <algorithm>
#include <vector>

class MergeNames{
public:
    static std::vector<std::string> unique_names(std::vector<std::string>& n1, std::vector<std::string>& n2){
        std::vector<std::string> vector_unique;
        vector_unique.insert(vector_unique.end(), n1.begin(), n1.end());
        vector_unique.insert(vector_unique.end(), n2.begin(), n2.end());
        std::sort(vector_unique.begin(), vector_unique.end());
        auto last = std::unique(vector_unique.begin(), vector_unique.end());
        vector_unique.erase(last, vector_unique.end());
    return vector_unique;
    }
};
#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"ava", "emma", "olivia"};
    std::vector<std::string> names2 = {"emma", "olivia", "sophia"};
    
    std::vector<std::string> result = MergeNames::unique_names(names1, names2); // 不能通过类名来调用类的非静态成员函数。
    //std::vector<int> a = {0,3,5,67,6,8,2};
    for(auto element:result)
    {
        std::cout << element << ' ' ; // should print Ava Emma Olivia Sophia
    }
    std::cout << std::endl;
}
#endif
