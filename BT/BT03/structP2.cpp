#include <iostream>
using namespace std;
struct  Point{
  int x, y;
  void getPos(){
      cin >> x >> y;
  }
};
void print (Point p ){
    cout << p.x << " " << p.y ;

}

Point mid_point(const Point p,const Point o){
    Point new_mid_point;
    new_mid_point.x = (p.x + o.x) / 2;
    new_mid_point.y = (p.y + o.y) / 2;
return new_mid_point;
}

struct Rect {
  int xR, yR, wR, hR ;
  void getPos(){
      cin >> xR >> yR >> wR >> hR;
  }
  // if x , y is Bot-left
  bool contain_ifBot(Point p){
      if ( p.x <= xR + wR && p.x >= xR && p.y >= yR &&p.y <= yR + hR ) return true;
      return false;
  }
  // if x,y is Top-left
  bool contain_ifTop(Point p){
      if ( p.x >= xR && p.x <= xR + wR  &&  p.y <= yR && p.y >= yR - hR) return true;
      return false;
  }

};


int main()
{
    // Point point;
    // point.x = 10;
    // point.y = 11;

    // Point o ;
    // o.x = 10;
    // o.y = 13;

    // Point newp = mid_point(point,o);
    // print(newp);
    Point point;
    point.getPos();

    Rect rect;
    rect.getPos();
    bool res = rect.contain_ifTop(point);
    cout << boolalpha << res;
    return 0;
}
