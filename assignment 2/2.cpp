#include<iostream>
#include<cmath>
using namespace std;

class point{
    private:
    int x, y;
    public:
    point(int x, int y){
        this->x=x;
        this->y=y;
    }
    int calculate(point);
};

int point::calculate(point a){
    return sqrt(pow(x-a.x, 2)+pow(y-a.y, 2));
}

main(){
    point p1(2, 1);
    point p2(1, 7);
    cout<<"The euclidean diatance between P1 and P2 is "<<p1.calculate(p2);
}