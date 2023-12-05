#ifndef COUNTER_INCLUDED // Counter.h가 중복 included 되지 않았는지 검사

#define COUNTER_H_INCLUDED // Counter.h가 처음 included 될 때 정의됨

class Counter
{
private:
    int value; //private 데이터 멤버
public: //public 멤버 함수
    //void reset(){ // 계수기 값을 0 으로 지움
      //  value = 0;
   // }
    void count(){ // 계수기의 값을 1 증가시킴
        ++value;
    }
    int getValue() const { // 계수기의  현재 값을 반환함
        return value;
    }
};






#endif 