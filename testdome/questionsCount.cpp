// Multiple choice test has several multiple choice questions.
// Each question can have only one correct answer. Additionally, timed multiple choice test can specify the time allowed for solving each question in the test.
// The code below satisfies this specification, but the customer complained that the memory usage of the program constantly increases. Fix this problem.
// https://www.testdome.com/questions/cpp/multiple-choice-test/9808

#include <iostream>
#include <string>

class MultipleChoiceTest{
public:
    MultipleChoiceTest(int questionsCount){
        this->questionsCount = questionsCount;//通过对象名字访问成员使用点号.，通过对象指针访问成员使用箭头->，这和结构体非常类似
        answers = new int[questionsCount]; // new assgn memory
        for (int i=0; i<questionsCount; i++){
            answers[i] = -1;
        }
    }
    
    void setAnswer(int questionIndex, int answer){
        answers[questionIndex] = answer;
    }
    int getAnswer(int questionIndex) const{
        return answers[questionIndex];
    }
    
    virtual ~MultipleChoiceTest(){ //
        // destructor// 析构函数与构造函数相反. 对象脱离作用域时系统自动执行析构函数, 清理善后 比如用new 后 使用 delete 释放.
        delete[] answers;
    }
protected:
    int questionsCount;
private:
    int* answers;
};


#ifndef RunTest
void executeTest(){
    MultipleChoiceTest test(5);
    for (int i=0; i<5; i++){
        test.setAnswer(i,i);
    }
    for (int i=0; i<5; i++){
        std::cout << "Question "<< i+1 << ",correct answer: " << test.getAnswer(i) << "\n";
    }
}

int main(){
    for (int i=0; i<3; i++){
        std::cout << "Test: " << i+1 << "\n";
        executeTest();
    }
}
#endif
