#include <iostream>
using namespace std;
struct  Point{
  int x, y;
};
void print (Point p ){
    cout << p.x << " " << p.y ;
}

int main()
{
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);
    return 0;
}

BÀI 3

#include <iostream>
using namespace std;
struct  Point{
  int x, y;
};
void print (Point p ){
    cout << p.x << " " << p.y ;
}
// viết mid_point

Point mid_point(const Point p,const Point o){
    Point new_mid_point;
    new_mid_point.x = (p.x + o.x) / 2;
    new_mid_point.y = (p.y + o.y) / 2;
return new_mid_point;
}

int main()
{
    Point point;
    point.x = 10;
    point.y = 11;

    Point o ;
    o.x = 10;
    o.y = 13;

    Point newp = mid_point(point,o);
    print(newp);
    return 0;
}
