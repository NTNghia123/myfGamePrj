#include <iostream>
using namespace std;

struct Rect {
  int xR, yR, wR, hR ;
  void getPos(){
      cout << "nhap vao lan luot x,y,w,r: ";
      cin >> xR >> yR >> wR >> hR;
  }
};

struct Ship{
  Rect rect;
  string id;
  int dx, dy;

  void getIn4(){
      cout << "nhap vao ID cua con tau: " ;
      cin.ignore();
      getline(cin,id);
      cout  << "nhap vao toc do cua con tau truc x: " ;
      cin >> dx ;
      cout  << "nhap vao toc do cua con tau truc y: " ;
      cin >> dy ;

  }

  void move(){
    rect.xR += dx;
    rect.yR += dy;
  }
  void so_lan_move(){
      int so_lan;
      cout << "nhap vao so lan move: ";
      cin >> so_lan;
      for ( int i = 0 ; i < so_lan; i++){
          move();
      }
  }
};

void display(const Ship& ship){
    //hien thi so hieu va toa do
    cout <<"ID con tau la:" << ship.id << endl << "Toa do con tau la:(" << ship.rect.xR << "," << ship.rect.yR<< ")" << endl;
}

int main()
{

    Ship ship;
    ship.rect.getPos();
    ship.getIn4();

    ship.so_lan_move();
    display(ship);
    return 0;
}
