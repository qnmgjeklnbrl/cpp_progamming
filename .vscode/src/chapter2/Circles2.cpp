#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

struct C2dType
{
    double x,y;
};

class CircleClass //원 클래스
{
    C2dType center; //중심 좌표
    double radius; //반지름
public:
    void init(double cx, double cy, double r){ //중심(cx, cy), 반지름 r 로 원을 초기화
        center.x = cx;
        center.y = cy;
        radius = r;
    }
    //원의 면적 계산
    double area() const {
        return radius * radius * PI;
    }
    //두 원의 중첩여부
    bool chkOverlap(const CircleClass& c) const {
        double dx = center.x - c.center.x;
        double dy = center.y - c.center.y;
        double dCntr = sqrt(dx*dx + dy*dy);
        return dCntr < (radius + c.radius);
    }
    //원 객체의 정보 디스플레이
    void display() const {
        cout << "중심: (" << center.x << "," << center.y << ")";
        cout << " 반경: " << radius << endl;
    }
}; 
int main(){
    CircleClass c1, c2;
    c1.init(0, 0, 10); //중심 원점, 반지름 10으로 초기화
    c2.init(30, 10, 5); //중심 (30, 10) 반지름 5로 초기화

    cout << "원1" << endl;
    c1.display();
    cout <<"원1의 면적: " << c1.area() << endl;

    cout << "원2" << endl;
    c2.display();
    cout << "원2의 면적: " << c2.area() << endl;

    //두 원의 중첩 여부 출력
    if(c1.chkOverlap(c2)){
        cout << "두 원은 중첩 됩니다" << endl;
    } else {
        cout << "두 원은 중첩되지 않습니다." << endl;
    }
    return 0;
}
