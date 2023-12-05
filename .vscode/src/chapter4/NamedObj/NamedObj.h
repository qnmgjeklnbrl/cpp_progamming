#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
using namespace std;

class NamedObj
{
private:
    char *name;
    int id;
    //static 데이터 멤버
    static int nConstr; //생성된 객체 수
    static int nDestr; // 소멸된 객체 수
    
public:
    NamedObj(const char *s); //생성자
    ~NamedObj(); // 소멸자
    void display() const { //객체의 속성 출력
        cout << "ID: " << id <<"--> 이름: " << name << endl;
    }
    static int nObj(){ // 존재하는 객체 수 반환
        return nConstr - nDestr;
    }
};











#endif