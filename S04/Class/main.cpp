#include <iostream>
#include <math.h>
using namespace std;

class Point{
    public:
    double cx;
    double cy;

    Point(){};
    Point (double x, double y):cx(x),cy(y){};

    double DistanceTo(Point p){
        double x_dif = cx - p.cx;
        double y_dif = cy - p.cy;
        return sqrt(x_dif*x_dif + y_dif*y_dif);
    }

};

class Circle{
    public:
    Point co;
    double rad;

    // Cricle(const Point& p, double r){
    //     co = p;
    //     rad = r;

    // }
    Circle(const Point& p, double r):co(p),rad(r){};
    Circle(){};

    double DistanceTo(Circle c){
        return DistanceTo(c.co);
    }
    double DistanceTo(Point p){
        return p.DistanceTo(co);
    }
};

int main(){
    Point p1;
    Point p2(4,7);
    Point p3(1,5);
    Circle c1(Point(), 12.3);
    Circle c2(p3, 12);

    cout << c1.DistanceTo(c2) << endl;
    cout << c1.DistanceTo(p1) << endl;
    cout << c1.DistanceTo(p2) << endl;

    return 0;
}