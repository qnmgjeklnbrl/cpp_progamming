#ifndef VEC_F_H_INCLUDED
#define VEC_F_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;


class VecF
{
private:
    int n;
    float *arr;
public:
    VecF(int d, float *a = nullptr):n {d}{
        arr = new float[d];
        if (a) memcpy(arr,a,sizeof(float) * n);
    };
    //수정 코드 : 복사생성자 명시적으로 작성
    VecF(const VecF& fv) :n{fv.n}{
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float)*n);
    }
    
    //이동생성자 이용
    VecF(VecF&& fv): n{fv.n}, arr{fv.arr}{
        fv.arr = nullptr;
        fv.n = 0;
    }
    ~VecF(){
        delete[]arr;
    };
    VecF add(const VecF& fv) const {
        VecF tmp(n);  //벡터의 덧셈 결과를 저장할 임시 객체
        for (int i = 0; i < n; i++)
        {
            tmp.arr[i] = arr[i] + fv.arr[i];
        }
        return tmp; //덧셈 결과를 반환함
        
    }
    void print() const {
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "]";
        
    }
};















#endif