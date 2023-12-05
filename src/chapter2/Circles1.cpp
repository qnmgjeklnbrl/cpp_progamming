#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141593;

//2차원 좌표 구조체
struct C2dType
{
    double x,y;
};
//원 구조체
struct CircleType
{
    C2dType center; //중심 좌표
    double radius; // 반지름
};

double CircleArea(CircleType c){
    return c.radius * c.radius * PI;
}

bool chkOverlap(CircleType c1, CircleType c2){
    double dx = c1.center.x - c2.center.x;
    double dy = c1.center.y - c2.center.y;
    double dCntr = sqrt(dx*dx + dy*dy);

    return dCntr < c1.radius + c2.radius;
}

void dispCircle(CircleType c){
    cout << "중심: (" << c.center.x << "," << c.center.y << ")";
    cout << " 반경: " << c.radius << endl;
}

int main()
{
    CircleType c1 = {{0,0} , 10}; // 중심 원점, 반지름 10 으로 초기화
    CircleType c2 = {{30,10} , 5}; // 중심 (30, 10) 반지름 5로 초기화


    cout << "원1" << endl;
    dispCircle(c1);
    cout << " 원1의 면적: " << CircleArea(c1) << endl;
    cout << "원2" << endl;
    dispCircle(c2);
    cout << " 원2의 면적: " << CircleArea(c2) << endl;

    //두 원의 중첩 여부 출력
    if (chkOverlap(c1, c2))
    {
        cout << "두 원은 중첩됩니다." << endl;
    } else
    {
        cout << "두 원은 중첩되지 않습니다." << endl;
    }
    
    return 0;
    
}
